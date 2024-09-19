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


// Function to generate a random lowercase letter
char random_lowercase_letter(mt19937& rng) {
    uniform_int_distribution<int> dist('a', 'z');
    return static_cast<char>(dist(rng));
}

// Function to generate a random string of given length
string random_string(int length, mt19937& rng) {
    string s;
    s.reserve(length);
    for (int i = 0; i < length; ++i) {
        s += random_lowercase_letter(rng);
    }
    return s;
}

// Function to generate random test input according to constraints
void generate_test_case() {
    mt19937 rng(random_device{}());

    // Maximum limits
    const int max_total_length = 100000; // sum of words[i].length <= 1e5
    const int max_word_length = 5000;    // words[i].length <= 5e3
    const int max_words_length = 100;    // words.length <= 100
    const int max_target_length = 5000;  // target.length <= 5e3

    // Random number of words between 1 and max_words_length
    uniform_int_distribution<int> num_words_dist(1, max_words_length);
    int num_words = num_words_dist(rng);

    vector<string> words;
    int total_length = 0;

    // Generate words
    for (int i = 0; i < num_words; ++i) {
        int remaining_length = max_total_length - total_length;
        if (remaining_length <= 0) break;

        // Ensure each word has length at least 1 and at most max_word_length or remaining_length
        int max_length = min(max_word_length, remaining_length);
        uniform_int_distribution<int> word_length_dist(1, max_length);
        int word_length = word_length_dist(rng);

        string word = random_string(word_length, rng);
        words.push_back(word);

        total_length += word_length;
    }

    // Generate target string
    uniform_int_distribution<int> target_length_dist(1, max_target_length);
    int target_length = target_length_dist(rng);
    string target = random_string(target_length, rng);

    // Output the generated test case
    cout << words.size() << endl; // Output the number of words
    for (const string& word : words) {
        cout << word << endl;     // Output each word
    }
    cout << target << endl;       // Output the target string
}

int main() {
    // Generate 10000 test case
    for (int i = 0; i < 100; ++i)
        generate_test_case();

    return 0;
}
