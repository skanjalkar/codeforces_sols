#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s; cin >> s;
    int ans = n - 1;
    for (int i = 0; i < n; ++i) {
         if (s[i] == '>' || s[n-1-i] == '<') {
            ans = min(ans, i);
            break;
        }
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
