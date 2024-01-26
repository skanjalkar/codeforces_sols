#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = 0;
    for (int k = 1; k <= n; ++k) {
        if (n % k == 0) {
            int g = 0;
            for (int i = 0; i + k < n; ++i) {
                g = __gcd(g, abs(a[i] - a[i+k]));
            }
            ans += (g != 1);
        }
    }
    cout << ans << "\n";
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