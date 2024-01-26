#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a[4], b[4];
    for (int i = 0; i < 4; ++i) {
        cin >> a[i] >> b[i];
    }
    sort(a, a+4);
    int ans = abs(a[0] - a[2])*abs(a[0] - a[2]);
    cout << ans << '\n';
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