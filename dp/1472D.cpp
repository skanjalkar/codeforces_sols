#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<vector<int<vector<int>>>dp(n, vector<vector<int>>(2, vector<int>(3, 0)));
    vector<int> even, odd;
    for (int i = 0; i < n; ++i) {
        if (i % 2) odd.push_back(a[i]);
        else even.push_back(a[i]);
    }
    sort(even.begin(), even.end(), [&] (const int& a, const int& b) { return a > b; });
    sort(odd.begin(), odd.end(), [&] (const int& a, const int& b) { return a > b; });
    int i = 0, j = 0;
    dp[0][0] = {even[i], i+1, j};
    dp[0][1] = {0, j+1, i};
    for (int idx = 1; idx < n; ++i) {
        if (idx % 2 == 0) {
            // alice playing
            dp[idx][0] = max(dp[idx-1][0]
        }
        else {
        
        }
    }  
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
