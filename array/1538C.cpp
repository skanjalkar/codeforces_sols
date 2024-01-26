#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, l, r;
    cin >> n >> l >> r;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a+n);
    auto lb = [&](long long v){
        return (lower_bound(a, a + n, v) - a);
    };
    auto ub = [&](long long v) {
        return (upper_bound(a, a + n, v) - a);    
    };
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        int hidx = ub(r - a[i]);
        int lidx = lb(l - a[i]);
        ans -= lidx;
        ans += hidx;
        if (l <= 2 * a[i] && 2 * a[i] <= r) {
            --ans;
        }
        //hidx = min(hidx, 
    }
    cout << ans / 2 << endl;
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
