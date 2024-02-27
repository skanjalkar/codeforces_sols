#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> prefix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n; ++i) {
        prefix[i] = a[i] + prefix[i-1];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int left, u;
        cin >> left >> u;
        int l = left;
        int r = n+1;
        --left;
        while (l+1 < r) {
            int m = (l + r) / 2;
            if (u - (prefix[m]-prefix[left]-1) > 0 || abs(u-(prefix[m]-prefix[left]-1))+1 < u-(prefix[m-1]-prefix[left]-1)) {
                l = m;
            }
            else {
                r = m;
            }
        }
        cout << l << " ";        
    }
    cout << endl;
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
