#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n-1; ++i) {
        int a;
        cin >> a;
        sum += a;
    }
    cout << sum * (-1) << "\n";
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
