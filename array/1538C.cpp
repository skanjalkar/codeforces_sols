#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a+n);
    function<int(int)>lb = [&](int v) {
        return -1;
    };
    function<int(int)>ub = [&](int v) {
        return -1;
    };
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int hidx = lb(r - a[i]);
        int lidx = ub(l - a[i]);
        //hidx = min(hidx, 
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
