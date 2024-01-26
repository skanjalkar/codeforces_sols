#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] == k) {
            cout << "YES" << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
    return;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}