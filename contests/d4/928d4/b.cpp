#include <bits/stdc++.h>

using namespace std;

char a[11][11];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); ++j) {
            a[i][j] = s[j];
        }
    }
    int start = -1;
    int prev_start = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] == '1' && prev_start == -1) {
                prev_start = j;
                break;
            }
            if (a[i][j] == '1' && start == -1) {
                start = j;
                break;
            }
        }
        if (start != -1 && prev_start != -1) {
            cout << (start == prev_start ? "SQUARE" : "TRIANGLE") << endl;
            return;
        }
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
