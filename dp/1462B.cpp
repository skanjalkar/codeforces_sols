#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string want = "2020";
    string a = s.substr(0, 4);
    string b = s.substr(0, 3) + s.substr(n-1, 1);
    string c = s.substr(0, 2) + s.substr(n-2, 2);
    string d = s.substr(0, 1) + s.substr(n-3, 3);
    string e = s.substr(n-4, 4);
    if (a == want || b == want || c == want || d == want || e == want) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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
