#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    int st = 0, end = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B') {
            if (cnt == 0) {
                st = i;
                end = i;
            }
            else
                end = i;
            ++cnt;
        }
    }
    cout << end - st + 1 << endl; 
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
