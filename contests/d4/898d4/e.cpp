#include <bits/stdc++.h>

using namespace std;
long long a[200005];
long long n, x;
bool works(long long mid) {
    long long s = 0;
    for (int i = 0; i < n; ++i) {
        s +=  max(0LL, mid - a[i]);
    }
    return s <= x;
}

void solve() {
    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long ans = 0;
    long long low = 1, high = 2000000007;
    while (low <= high) {
        long long mid = (low + high) / 2;
        if (works(mid)) {
            ans = low;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << ans << "\n";
    return;
    }

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
