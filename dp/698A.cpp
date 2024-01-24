#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int dp[n][3];
    dp[0][0] = 1;
    if (a[0] == 0) {
        dp[0][1] = 1;
        dp[0][2] = 1;
    }
    if (a[0] == 1) {
        dp[0][1] = 0;
        dp[0][2] = 1;
    }
    if (a[0] == 2) {
        dp[0][1] = 1;
        dp[0][2] = 0;
    }
    if (a[0] == 3) {
        dp[0][1] = 0;
        dp[0][2] = 0;
    }
    for (int i = 1; i < n; ++i) {
        dp[i][0] = 1 + min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2]));
        if (a[i] == 1) {
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
            dp[i][2] = 1 + min(dp[i-1][0], dp[i-1][1]);
        }
        else if (a[i] == 2) {
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
            dp[i][1] = 1 + min(dp[i-1][0], dp[i-1][2]);
        }
        else if (a[i] == 0) {
            dp[i][1] = 1 + min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2]));
            dp[i][2] = 1 + min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2]));
        }
        else {
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
        }
    }
    int ans = 0;
    ans = min(dp[n-1][0], min(dp[n-1][1], dp[n-1][2]));
    cout << ans << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
