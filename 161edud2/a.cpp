#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    // if we don't want c to match
    // we need to look at every index if there exists a letter
    for (int i = 0; i < n; ++i) {
        if ((a[i] != c[i]) && (b[i] != c[i])) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
