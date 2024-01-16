#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s, f;
    cin >> s >> f;
    int ans = 0;
    // if cnt(s) > cnt(f), delete till equal, and number of non matching = ans
    // non matching, ans = total cnt - matching + rem matching
    int tot2 = 0, tot1 = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            ++tot1;
            if (f[i] == '0') {
                ++cnt;
            }
        }
        if (f[i] == '1') {
            ++tot2;

        }
    }
    if (tot1 == tot2) {
        cout << cnt << '\n';
        return;
    }
    else if (tot1 < tot2) {
        ans += tot2 - tot1;
        cnt = max(cnt, cnt - (tot2 - tot1));
        ans += cnt;
        cout << ans << '\n';
    }
    else {
        ans += tot1 - tot2;
        cnt = max(0, cnt - (tot1 - tot2));
        ans += cnt;
        cout << ans << '\n';
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