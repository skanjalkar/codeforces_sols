#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    long long pref[n+1];
    memset(pref, 0, sizeof(pref));
    pref[1] = (long long) (s[0] - 'a' + 1);
    for (int i = 1; i < n; ++i) {
        pref[i+1] = pref[i] + (long long) (s[i] - 'a' + 1);
    }
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        --l;
        cout << pref[r] - pref[l] << endl;
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
