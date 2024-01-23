#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    long long a[n], b[m];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    long long d = 0;
    sort(a, a+n);
    sort(b, b+m, [&](const int a, const int b) { return a > b; });
    
    
    cout << d << endl;
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
