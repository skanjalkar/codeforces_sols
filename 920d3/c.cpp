#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, f, a, b;
    cin >> n >> f >> a >> b;
    long long m[n];
    for (int i = 0; i < n; ++i) {
        cin >> m[i];
    }
    long long dp[n];
    dp[0] = min(a*m[0], b);
    for (int i = 1; i < n; ++i) {
        dp[i] = dp[i-1] + min(a*(m[i]-m[i-1]), b); 
    }
    if (dp[n-1] - f < 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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
