#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int dp[n][2];
    dp[0][0] = a[0];
    dp[0][1] = a[0];
    for (int i = 1; i < n; ++i) {
        if ((abs(a[i]) % 2) == (abs(a[i-1]) % 2)) {
            dp[i][0] = a[i];
//            cout << a[i] << " debug " << a[i-1] << endl;
        }
        else {
            dp[i][0] = a[i] + max(dp[i-1][0], dp[i-1][1]);
        }
        dp[i][1] = a[i];
    }
    int ans = a[0];
    for (int i = 1; i < n; ++i) {
        ans = max(ans, max(dp[i][0], dp[i][1]));
    }
    cout << ans << endl;
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
