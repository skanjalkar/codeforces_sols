#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int cnt[100001] = {0};
    for (int i = 0; i < n; ++i) {
        cnt[a[i]]++;
    }
    long long dp[100001] = {0};
    dp[0] = 0;
    dp[1] = cnt[1];
    for (int i = 2; i <= 100000; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + 1LL * cnt[i] * i);
    }
    cout << dp[100000] << endl;
}

int main() {
    solve();
    return 0;
}