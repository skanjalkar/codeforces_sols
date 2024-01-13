#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a[26];
    memset(a, 0, sizeof(a));
    for (char &c : s) {
        a[c-'a']++;
    }
    int mx = -1;
    for (int i = 0; i < 26; ++i) {
        mx = max(mx, a[i]);
    }
    cout << max((n % 2), 2 * mx - n) << "\n";
    return;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
