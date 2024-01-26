#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector<string> c;
    for (int i = 0; i < 9; ++i) {
        string s;
        cin >> s;
        c.push_back(s);
    }
    for (string &s : c) {
        for (int i = 0; i < (int)s.size(); ++i) {
            if (s[i] == '1') {
                s[i] = '2';
            }
        }
    }
    for (int i = 0; i < 9; ++i) {
        cout << c[i] << endl;
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
