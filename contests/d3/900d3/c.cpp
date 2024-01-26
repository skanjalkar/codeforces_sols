#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, k, x;
    cin >> n >> k >> x;
    long long sum = (n * (n+1)/2) - ((n-k) * (n-k+1)/2);
    long long miS = k * (k+1) / 2;
    // for (long long i = n; i >= n-k+1; --i) {
    //     sum += i;
    // }

    // cout << "sum: " << sum << "\n";

    if (x < miS || x > sum) {
        cout << "NO" << "\n";
        return;
    }
    cout << "YES" << "\n";

    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}