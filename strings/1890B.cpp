#include <bits/stdc++.h>

using namespace std;

bool valid(const string &t) {
    const int m = t.size();
    for (int i = 0; i < m - 1; ++i) {
        if (t[i] == t[i+1]) {
            return false;
        }
    }
    return true;
}


void solve() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    
   
    bool ok = valid(t);
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i+1]) {
            if (s[i] == t[0] || s[i+1] == t[m-1] || (!ok)) {
                cout << "NO" << endl;
                return;
            }
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
