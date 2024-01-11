#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, q, m;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    cin >> q;
    sort(x, x + n);

    while (q--) {
        cin >> m;
        int ans = upper_bound(x, x + n, m) - x;
        cout << ans << endl;
    }
    return;
}

int main () {
    solve();
    return 0;
}