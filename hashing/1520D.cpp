#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    unordered_map<long long, long long>mp;
    for (int i = 0; i < n; ++i) {
        mp[a[i]-i]++;
    }
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        if (mp.count(a[i]-i) && mp[a[i]-i] > 1) {
             mp[a[i]-i]--;
             ans += mp[a[i]-i];
        }
    }
    cout << ans << endl;
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
