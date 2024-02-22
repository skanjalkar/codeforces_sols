#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b, k;
    cin >> a >> b >> k;
    vector<vector<int>> pairs(k, vector<int>(2, 0));
    for (int i = 0; i < k; ++i) {
        cin >> pairs[i][0];
    }
    for (int i = 0; i < k; ++i) {
        cin >> pairs[i][1];
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
