#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int cnt = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] == a[i-1]) {
            ++cnt;
        }
        else {
            break;
        }
    }
    int cnt2 = 1;
    for (int i = n-2; i >= 0; --i) {
        if (a[i] == a[i+1]) {
            ++cnt2;
        }
        else {
            break;
        }
    }
    if (a[0] != a[n-1]) {
        cout << n-max(cnt, cnt2) << endl;
    }
    else {
        cout << max(0, n - (cnt + cnt2)) << endl;
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
