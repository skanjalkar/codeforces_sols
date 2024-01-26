#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, k, H;
    cin >> n >> m >> k >> H;
    int h[n];
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int diff = abs(h[i] - H);
        if (diff % k == 0 && diff / k < m && diff != 0) {
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}