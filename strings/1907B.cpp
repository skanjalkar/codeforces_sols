#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    vector<bool>a(s.size(), false);
    stack<int> lb, lx;
    const int n = s.size();
    for (int i = 0; i < n; ++i) {
        if (isupper(s[i])) {
            if (s[i] == 'B') {
                if (!lb.empty()) {
                    a[lb.top()] = true;
                    lb.pop();
                }
                a[i] = true;
            }
            else {
                lb.push(i);
            }
        }
        else {
            if (s[i] == 'b') {
                if (!lx.empty()) {
                    a[lx.top()] = true;
                    lx.pop();
                }
                a[i] = true;
            }
            else {
                lx.push(i);
            }
        }
    }
    string ans;
    for (int i = 0; i < n; ++i) {
        if (!a[i]) {
            ans += s[i];
        }
    }
    cout << ans << endl;
    return;
}   

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
