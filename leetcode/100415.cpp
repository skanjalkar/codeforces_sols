#include <bits/stdc++.h>

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

const long long MOD1 = 1000000007;
const long long MOD2 = 1000000009;
const int BASE1 = 911;
const int BASE2 = 1597;

class ACNode {
public:
    ACNode* children[26];
    ACNode* fail;
    vector<int> lengths;  // Store lengths of matched patterns ending at this node

    ACNode() {
        for (int i = 0; i < 26; ++i) {
            children[i] = nullptr;
        }
        fail = nullptr;
    }
    ~ACNode() {
        for (int i = 0; i < 26; ++i) {
            if (children[i]) {
                delete children[i];
            }
        }
    }
};

void build_automaton(const vector<string>& patterns, ACNode* root) {
    // Build the trie
    for (const string& pattern : patterns) {
        ACNode* node = root;
        for (char c : pattern) {
            int index = c - 'a';
            if (node->children[index] == nullptr) {
                node->children[index] = new ACNode();
            }
            node = node->children[index];
            // Since every prefix is a valid string, we can store lengths here if needed
        }
        node->lengths.push_back(pattern.size());
    }

    // Build failure links
    queue<ACNode*> q;
    for (int i = 0; i < 26; ++i) {
        if (root->children[i]) {
            root->children[i]->fail = root;
            q.push(root->children[i]);
        }
    }

    while (!q.empty()) {
        ACNode* current = q.front();
        q.pop();

        for (int i = 0; i < 26; ++i) {
            ACNode* child = current->children[i];
            if (child) {
                ACNode* fail_node = current->fail;
                while (fail_node && fail_node->children[i] == nullptr) {
                    fail_node = fail_node->fail;
                }
                if (fail_node) {
                    child->fail = fail_node->children[i];
                } else {
                    child->fail = root;
                }
                // Merge lengths from fail node
                child->lengths.insert(child->lengths.end(),
                                      child->fail->lengths.begin(),
                                      child->fail->lengths.end());
                q.push(child);
            }
        }
    }
}

class Solution {
public:
    int minValidStrings(vector<string>& words, string target) {
        ACNode* root = new ACNode();

        // Generate all valid prefixes (prefixes of words)
        vector<string> patterns;
        for (const string& word : words) {
            string prefix;
            for (char c : word) {
                prefix += c;
                patterns.push_back(prefix);
            }
        }

        build_automaton(patterns, root);

        int n = target.size();
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;

        ACNode* node = root;
        for (int i = 0; i < n; ++i) {
            int index = target[i] - 'a';

            while (node && node->children[index] == nullptr) {
                node = node->fail;
            }
            if (node) {
                node = node->children[index];
            } else {
                node = root;
            }

            ACNode* temp = node;
            while (temp != root) {
                for (int length : temp->lengths) {
                    int start = i - length + 1;
                    if (start >= 0 && dp[start] != INT_MAX) {
                        dp[i + 1] = min(dp[i + 1], dp[start] + 1);
                    }
                }
                temp = temp->fail;
            }
        }

        int result = dp[n] != INT_MAX ? dp[n] : -1;
        delete root;
        return result;
    }
};

int main() {
    Solution sol;
    int t;
    cin >> t;
    while (t--) {
        vector<string> words;
        string target;
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            string temp;
            cin >> temp;
            words.push_back(temp);
        }
        cin >> target;
        cout << sol.minValidStrings(words, target) << endl;
    }
    return 0;
}
