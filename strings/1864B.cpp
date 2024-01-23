#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string ans = s;
    if (k % 2 == 1) {
        string s1;
        string s2;
        for (int i = 0 ;i < s.size(); ++i) {
            (i % 2 == 0) ? s1 += s[i] : s2 += s[i];
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        for (int i = 0, e = 0, o = 0; i < n; ++i) {
            if (i % 2 == 0) {
                ans[i] = s1[e++];
            }
            else {
                ans[i] = s2[o++];
            }
        }
    }
    else {
        sort(ans.begin(), ans.end());
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
