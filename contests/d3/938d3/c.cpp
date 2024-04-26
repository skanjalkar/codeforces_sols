#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    vector<long long>a(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long i = 0, j = n-1;
    bool ok = false;
    while (k) {
        if (i > j) {
            cout << n << endl;
            return;
        }
        if (!ok) {
            if (a[i] > k) {
                break;
            }
            else if (a[i] == k) {
                ++i;
                k = 0LL;
            }
            else {
                k -= a[i];    
                a[i] = 0;
                ++i;
            }
        }
        else {
            if (a[j] > k) {
                break;
            }
            else if (a[j] == k) {
                --j;
                k = 0LL;
            }
            else {
                k -= a[j];
                a[j] = 0;
                ++j;
            }
        }               
        ok = !ok;
    }
    cout << n-j+i << endl;
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
