// write the template
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    // 3*a[i+2] % (a[i] + a[i+1]) != 0;
    // a[i+1] > a[i]
    a[0] = 6;
    a[1] = 8;
    int odd = 7;
    int even = 2;
    for (int i = 2; i < n; ++i) {
        if ((a[i-1] + a[i-2]) % 2 == 0) {
            a[i] = (a[i-1] % 2 == 0) ? a[i-1] + odd : a[i-1] + even;
        }
        else {
            a[i] = (a[i-1] % 2 == 0) ? a[i-1] + even : a[i-1] + odd;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}