#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    unordered_set<long long> iv;
    long long low = 0;
    long long high = 1000000000;
    for (int i = 0; i < n; i++) {
        long long a, x;
        cin >> a >> x;
        if (a == 3) {
            iv.insert(x);
        }
        else if (a == 1) {
            low = max(low, x);
        }
        else {
            high = min(high, x);
        }

    }
    int ans = high - low + 1;
    for (auto i : iv) {
        if (i >= low && i <= high) {
            ans--;
        }
    }
    cout << (ans < 0 ? 0 : ans) << "\n";
    return;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}