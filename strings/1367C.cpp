#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int i = 0;
    int ans = 0;
    while (i < n) {
        int j = i + 1;
        while (j < n && s[j] != '1') {
            ++j;
        }
        int l = 0, r = 0, res;
        if (s[i] == '1')
            l = k;
        
        if (j < n && s[j] == '1')
            r = k;
        res = j - i;
        if (l == k) --res;
        res -= l + r;
        if (res > 0) {
            ans += (res + k) / (k + 1);
        }
        i = j;
    }
    cout << ans << endl;
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
