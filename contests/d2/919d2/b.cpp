#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a+n);
    int pref[n+1];
    memset(pref, 0, sizeof(pref));
    for (int i = 1; i <= n; ++i) {
        pref[i] = pref[i-1] + a[i-1];
    }
    // if alice chooses to remove n-1, then bob pick odd elements from n-2.
    // in that case the sum of elements will be equal to
    // lets say alice removes k eleemtnts ..pref [n-k-x] - (pref[n-k] - pref[n-k-x+1])
    // we want the max sum in that case
    // the time complexity should be 0(nlogn)
    // cout << "----------------------------------------\n";
    // for (int i : pref) cout << i << " ";
    // cout << "\n";
    // cout << "----------------------------------------\n";
    int ans = INT_MIN;
    for (int i = 0; i <= k; ++i) {
        int curr = n - i;
        int sum = 2*pref[max(curr - x, 0)] - pref[curr];
        // cout << "sum: " << sum << " curr: " << curr << " curr - x: " << curr - x << "\n";
        ans = max(ans, sum);
    }
    cout << ans << "\n";
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