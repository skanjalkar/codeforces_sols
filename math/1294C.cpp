#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    unordered_set<int> st;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            st.insert(i);
            n /= i;
            break;
        }
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0 && !st.count(i)) {
            st.insert(i);
            n /= i;
            break;
        }
    }
    if (st.size() < 2 || st.count(n) || n == 1) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        st.insert(n);
        for (auto it : st) {
            cout << it << " ";
        }
        cout << endl;
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
