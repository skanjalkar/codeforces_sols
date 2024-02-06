#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int a[1000007];
    int b[1000007];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    unordered_set<int> sta, stb;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= 1 && a[i] <= k) {
            sta.insert(a[i]);
            // cout << "Inserting " << a[i] << endl;
        }
    }
    for (int j = 0; j < m; ++j) {
        if (b[j] >= 1 && b[j] <= k) {
            stb.insert(b[j]);
            // cout << "Inserting " << b[j] << endl;
        }
    }

    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= k; ++i) {
        // check if i is in both sets
        if (sta.find(i) == sta.end() && stb.find(i) == stb.end()) {
            cout << "NO" << endl;
            return;
        }

        if (sta.count(i)) cnt1++;
        if (stb.count(i)) cnt2++;
    }
    // cout << "Counter is " <<  cnt1 << "  " << cnt2 << endl
    if (cnt1 < k / 2 || cnt2 < k / 2) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
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
