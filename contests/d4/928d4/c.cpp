#include <bits/stdc++.h>

using namespace std;

int a[200005];



void solve() {
    int n;
    cin >> n;
    cout << a[n] << endl; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 1; i <= 200000; ++i) {
        int rem = 0;
        int ii = i;
        while (ii > 0) {
            rem += (ii % 10);
            ii /= 10;
        }
        a[i] = a[i-1] + rem;
    }
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
