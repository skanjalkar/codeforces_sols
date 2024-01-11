#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 1) {
            cnt++;
        }
    }
    if (sum % 2 || n == 1) {
        cout << "NO" << endl;
        return;
    }
    else {
        sum /= 2;
        if (sum % 2 == 0 || (sum % 2 == 1 && cnt > 0)) {
            cout << "YES" << endl;
            return;
        }
        else {
            cout << "NO" << endl;
            return;
        }
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}