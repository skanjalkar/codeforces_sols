#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b+n);
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 != b[i] % 2) {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}