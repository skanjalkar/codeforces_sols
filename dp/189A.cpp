#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int dp[n + 1];
    for (int i = 0; i <= n; i++) {
        dp[i] = -1;
    }


    dp[0] = 0;
    for (int i = 0; i <= n; i++) {
        if (i - a >= 0 && dp[i - a] != -1) {
            dp[i] = max(dp[i], dp[i - a] + 1);
        }
        if (i - b >= 0 && dp[i - b] != -1) {
            dp[i] = max(dp[i], dp[i - b] + 1);
        }
        if (i - c >= 0 && dp[i - c] != -1) {
            dp[i] = max(dp[i], dp[i - c] + 1);
        }
    }
    cout << dp[n] << endl;
    return;
}
int main() {
    solve();
    return 0;
}