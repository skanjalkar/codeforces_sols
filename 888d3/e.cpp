#include <bits/stdc++.h>

#define int long long

using namespace std;

vector<int> dp;
vector<bool> used;
vector<vector<int>> sl;

int get(int v){
    if(used[v]){
        return dp[v];
    }
    used[v] = true;
    int s = 0;
    for (int i = 0; i < sl[v].size(); ++i) {
        s += get(sl[v][i]);
    }
    if(!sl[v].empty()) dp[v] = min(dp[v], s);
    return dp[v];
}

void solve(int tc) {
    int n, k;
    cin >> n >> k;
    dp.resize(n);
    used.assign(n, false);
    sl.assign(n, vector<int>(0));
    for (int i = 0; i < n; ++i) {
        int e;
        cin >> e;
        dp[i] = e;
    }
    for(int i = 0; i < k; ++i){
        int e;
        cin >> e;
        dp[--e] = 0;
    }
    for(int i = 0; i < n; ++i){
        int m;
        cin >> m;
        sl[i].resize(m);
        for (int j = 0; j < m; ++j) {
            int e;
            cin >> e;
            sl[i][j] = --e;
        }
    }
    for(int i = 0; i < n; ++i){
        get(i);
    }
    for(int e: dp) cout << e << " ";
}


signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve(i);
        cout << "\n";
    }
    return 0;
}