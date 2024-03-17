#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n % 2) {
        cout << "NO" << endl;
    }
    else {
        string ans = "";
        bool flip = false;
        cout << "YES" << endl;
        for (int i = 0; i < n; i += 2) {
            if (flip) {
                ans += "BB";
            }
            else {
                ans += "AA";
            }
            flip = !flip;
        }
        cout << ans << endl;
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
