#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;
    // always use n and some number that doesn't divide n
    unordered_set<char> st;
    for (const char& d: s) st.insert(d);
    if (st.size() == 1 && st.count(c)) {
        cout << "0" << endl;
    }
    else if (st.size() == 2 && s.back() == c) {
        cout << 1 << endl;
        cout << n << endl;
    }
    else {
        cout << 2 << endl;
        cout << n-1 << " " << n << endl;
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
