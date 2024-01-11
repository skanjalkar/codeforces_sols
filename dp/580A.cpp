#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[100001];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int dp[100001];
    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i-1]) {
            dp[i] = dp[i-1] + 1;
        } else {
            dp[i] = 1;
        }
    }
    int ans = -1;
    for (int i = 0; i < n; i++) {
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
}

int main () {
    solve();
}