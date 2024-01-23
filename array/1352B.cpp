#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    if (n < k) {
        cout << "NO" << endl;
        return;
    }
    if (n % 2 == 0) {
        if (k % 2 == 1) {
            if (2*(k-1) >= n) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
                for (int i = 0; i < k - 1; ++i) {
                    cout << "2 ";
                }
                cout << (n - 2 * (k - 1)) << endl;
            }
        }
        else {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i) {
                cout << "1 ";
            }
            cout << (n - (k - 1)) << endl;
        }
    }
         
    else if ((n % 2 == 1) && (k % 2 == 1)) {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; ++i) {
            cout << "1 ";
        }
        cout << (n - (k - 1)) << endl;
    }
    else {
        cout << "NO" << endl;
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
