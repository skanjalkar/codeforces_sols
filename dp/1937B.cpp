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



void solve() {
    int n;
    cin >> n;

    vector<string> grid(2);
    for (int i = 0; i < 2; i++) {
        cin >> grid[i];
    }

    int max_down = n, min_down = 0;
    for (int i = n - 1; i >= 1; i--) {
        if (grid[0][i] == '1' && grid[1][i - 1] == '0') {
            max_down = i;
        }
    }

    for (int i = 0; i < max_down - 1; i++) {
        if (grid[1][i] == '1' && grid[0][i + 1] == '0') {
            min_down = i + 1;
        }
    }
    debug(grid, max_down, min_down);
    string result = grid[0].substr(0, max_down) + grid[1].substr(max_down-1);
    cout << result << endl;
    cout << max_down - min_down << endl;
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
