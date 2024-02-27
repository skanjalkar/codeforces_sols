#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    map<int, int> mp;
    int sum = 0;
    for (int i : a) {
        sum += i;
        mp[i%3]++;
    }
    if (sum % 3 == 0) {
        cout << 0 << "\n";
    }
    else if (sum % 3 == 1) {
        if (mp.count(1)) {
            cout << 1 << "\n";
        }
        else {
            cout << 2 << "\n";
        } 
    }
    else {
        cout << 1 << "\n"; 
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
