#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int>dp(n+1, 0);
    dp[0] = a;
    dp[1] = min(2*a, b);
    for (int i = 2; i < n; ++i) {
        dp[i] = min(dp[i-1] + a, dp[i-2] + b);
    }
    cout << dp[n-1] << endl;
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
