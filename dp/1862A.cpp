#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < m; ++j) {
            a[i][j] = s[j];
        }
    }
    string want = "vika";
    int curr = 0;
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i< n; ++i) {
            if (a[i][j] == want[curr]) {
                curr++;
                break;
            }
        }
        if (curr == 4) {
            cout << "yes" << "\n";
            return;
        }
    }
    cout << "No" << "\n";
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
