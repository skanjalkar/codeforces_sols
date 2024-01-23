#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        mp[a[i]]++;
    }
    if (mp.size() > 2) {
        cout << "NO" << endl;
        return;
    }
    vector<int> cnt;
    for (auto it : mp) {
        cnt.push_back(it.second);
    }
    if (cnt.size() > 1  && abs(cnt[0] - cnt[1]) > 1) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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
