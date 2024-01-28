#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x, n;
    cin >> x >> n;
    // x = x1 + x2 + .... + xn
    // max(gcd(x1, ...., xn)
    int ans = 1;
    for (int i = 1; i*i <= x; ++i) {
        // x = a + c*a*(n-1);
        // x = a(1 + c(n-1));
        // x/a - 1 = c(n-1);
        // c = ((x/a) - 1) % (n-1);
        cout << "value of i is: " <<  i * i << "\n";
        if (x % i == 0) {
            if (n <= x / i) {
                ans = max(ans, i);
            }
            if (n <= i) {
                ans = max(ans, x / i);
            } 
        }
    }
    cout << ans << endl;
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
