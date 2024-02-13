#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int first = n - 26;
    int second = first - 26;
    int third = second - 26;
    string ans;
    if (n <= 28) {
        ans += "aa";
        n -= 2;
        ans += ('a'  + (n-1));
    }
    else if (n <= 53) {
        ans += 'a';
        n -= 27;
        ans += ('a' + (n-1));
        ans += 'z';
    }
    else {
        n -= 52;
        ans += ('a' + (n-1));
        ans += "zz";
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
