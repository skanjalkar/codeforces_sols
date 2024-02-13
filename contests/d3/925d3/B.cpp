#include <bits/stdc++.h>

using namespace std;
int a[200006];
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }

    int required = sum / n;
    int extra = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > required) {
            extra += (a[i] - required);
        }
        else if (a[i] + extra < required) {
            cout << "NO" << endl;
            return;
        }
        else {
            extra -= (required - a[i]);
        }
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
