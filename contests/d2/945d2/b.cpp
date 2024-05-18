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

/*


3
1 0 2
5
3 0 1 4 2
8
0 1 3 2 2 1 0 3

0|1|3 =

*/

void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    for (long long &x : a) cin >> x;
    int ans = n-1;
    vector<vector<int>>dp(n, vector<int>(64, 0));
    for (int i = 0; i < n; ++i) {
        int x = a[i];
        for (int j = 0; j < 64; ++j) {
            if (x & (1LL << j)) {
                dp[i][j] = 1;
            }
            if (i > 0) {
                dp[i][j] += dp[i-1][j];
            }
        }
    }
    auto works = [&](int i) {
        // int i is the size of the sliding window
        vector<int>cnt = dp[i];
        // debug(dp[i], i);
        bool same = true;
        for (int j = i+1; j < n; ++j) {
            vector<int>temp = dp[j];
            for (int k = 0; k < 64; ++k) {
                temp[k] -= dp[j-i-1][k];
            }
            for (int k = 0; k < 64; ++k) {
                // check zero matches both places, and >1 matches both places
                // if not then its answer is not possible so return false
                if (temp[k] == 0 && cnt[k] == 0) {
                    continue;
                }
                if (temp[k] >= 1 && cnt[k] >= 1) {
                    continue;
                }
                same = false;
                break;
            }
        }
        return same;
    };
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (works(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans + 1 << '\n';
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
