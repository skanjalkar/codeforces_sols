#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int ans = 0;
    const int n = s.size();
    // construct a t such that t[i] != s[i] i \in [1...n];
    // select any two char in s and swap them
    // delete = 1 coin
    // basically have to make number of 0 and 1 equal
    int cnt = 0;
    for (char & c : s) {
        if (c == '1') {
            ++cnt;
        }
    }
    int cntz = n - cnt;
    for (int i = 0; i <= n; ++i) {
        if (i == n) {
            cout << n - i << "\n";
            return;
        }
        if (s[i] == '1') {
            if (cntz == 0) {
                cout << n - i << "\n";
                return;
            }
            --cntz;
        }
        if (s[i] == '0') {
             if (cnt == 0) {
                cout << n - i << "\n";
                return; 
            }
            --cnt;
        }
    }
    return;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
