#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int cnt = 0;
    for (const char c: s) {
        if (c == 'A') ++cnt;
    }
    const int n = s.size();
    if (cnt > n / 2) {
        cout << "A" << endl;
    }
    else {
        cout << "B" << endl;
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
