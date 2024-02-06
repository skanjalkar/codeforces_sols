#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[200007];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int track[26];
    memset(track, 0, sizeof(track));
    string ans = "";

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
            if (track[j] == a[i]) {
                ans += 'a' + j;
                track[j]++;
                break;
            }
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
