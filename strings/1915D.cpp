#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    // if there are two consecutive vowels or consonents add .
    string t;
    while (!s.empty()) {
        int x;
        if ((s.back() == 'a') || s.back() == 'e'){
            x = 2;
        }
        else {
            x = 3;
        }
        while (x--) {
            t += s.back();
            s.pop_back();
        }
        t += '.';
    }
    t.pop_back();
    reverse(t.begin(), t.end());
    cout << t << "\n";
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
