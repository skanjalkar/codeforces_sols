#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    const int n = (int) s.size();
    int pz = 0, po = 0;
    int cz = 0, co = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') ++pz;
        else ++po;
    }
    int ans = min(po, pz);
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            ++cz;
            --pz;
        }
        else {
            ++co;
            --po;
        }
        ans = min(ans, po + cz);
        ans = min(ans, pz + co);
    }

    cout << ans << "\n";
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
