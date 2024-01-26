#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a+n);
    if (a[0] == 0 && a[1] == 0) {
        cout << "0" << endl;
        return;
    }
    long long ans = 1;
    for (int i = 0; i < n; ++i) {
        long long temp = 1;
        a[i]++;
        for (int j = 0; j < n; ++j) {
            temp *= (long long) a[j];
        }
        ans = max(ans, temp);
        a[i]--;
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}