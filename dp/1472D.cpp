#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long>a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
//    sort(a, a+n, [&] (const long long &x, const long long &b) { return x > b; });
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            if (a[i] % 2 == 0) {
                ans += a[i];
            }
        }
        else {
            if (a[i] % 2 == 1) {
                ans -= a[i];
            }
        }
    }
    if (ans == 0) {
        cout << "Tie" << endl;
    }
    else {
        cout << (ans > 0 ? "Alice" : "Bob") << endl;
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
