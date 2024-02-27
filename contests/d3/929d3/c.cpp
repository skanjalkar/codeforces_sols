#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long a, b, l;
    cin >> a >> b >> l;
    long long A, B;
    long long x, y;
    set<long long>st;
    for (x = 0, A=1; A <= l; x++, A*=a) {
        for (y = 0, B=1; B<= l; y++, B *= b) {
            if (l%(A*B)) {
                continue;
            }
            st.insert(l/(A*B));
        }
    }
    cout << st.size() << endl;
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
