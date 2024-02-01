#include <bits/stdc++.h>

using namespace std;


void solve() {
    int n, m;
    cin >> n >> m;
    
    int ans = m / 2;
    cout << ans * n << endl; 
    
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
