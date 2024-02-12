#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;
    vector<int> ans;
    bool ok = true;
    for (const char& i : s)
        if (i != c) ok = false;
    if (!ok) {
        for (int i = 1; i < n+1; ++i) {
            ok = true;
            for (int j = i; j < n+1; ++j) {
                ok &= (s[j-1] == c);
                j += i-1;
            }
            if (ok) {
                ans.push_back(i);
                break;
            }
        }
        if (!ok) {
            ans.push_back(n);
            ans.push_back(n-1);
        }
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    if (ans.size()) cout << "\n";
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
