#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int cnt = 1;
    long long dp[n];
    memset(dp, 0, sizeof(dp));
    dp[0] = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] * a[i-1] > 0) {
            if (a[i-1] > a[i]) {
                a[i] = a[i-1];
            }
            dp[i] = dp[i-1] - a[i-1] + max(a[i], a[i-1]);
            ++cnt;
        }
        else {
            dp[i] = dp[i-1] + a[i];
        }
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
