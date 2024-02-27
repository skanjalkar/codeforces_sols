#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    bool ans = false;
    for (int i = 2; i < n; ++i) {
        if (a[i] % a[1] != 0) {
            ans = true;
        }
    }
    if (a[0] % a[1] != 0) {
        ans = true;
    }
    if (ans) 
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
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
