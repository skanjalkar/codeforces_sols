#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, c, d;
    cin >> n >> c >> d;
    vector<int>b(n*n);
    for (int i = 0; i < n*n; ++i) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    // a_i+1,j - a_i,j+1 = c - d;
    vector<vector<int>>a(n, vector<int>(n, 0));
    a[0][0] = b[0];
    vector<vector<int>>e(n, vector<int>(n, 0));
    e[0][0] = b[0];
    for (int i = 1; i < n; ++i) {
        a[i][0] = a[i-1][0] + c;
        a[0][i] = a[0][i-1] + d;
        e[i][0] = a[i-1][0] + c;
        e[0][i] = a[0][i-1] + d;
    }
    
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            a[i][j] = a[i-1][j] + c;
            e[i][j] = a[i][j-1] + d;
        }
    }
    vector<int>z, y;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            z.push_back(a[i][j]);
            y.push_back(e[i][j]);
        }
    }
    for (int i = 0; i < n*n; ++i) {
        if (z[i] != b[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 0; i < n*n; ++i) {
        if (y[i] != b[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
