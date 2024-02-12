#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> left(n, 0); // represents min number of charges to paint the first i cells
    vector<int> right(n, 0); // represents min number of charges to paint the last i cells

    for (int i = 0; i < n; ++i) {
        if (i - a[i] + 1 >= 0) {
            left[i] = left[i - a[i] + 1] + 1;
        }
        else {
            left[i] = 1;
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        if (i + a[i] - 1 < n) {
            right[i] = right[i + a[i] - 1] + 1;
        }
        else {
            right[i] = 1;
        }
    }

    cout << "---------------------------------\n";


    for (int i = 0; i < n; ++i) {
        cout << left[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i < n; ++i) {
        cout << right[i] << " ";
    }

    cout << "\n";

    int ans = INT_MAX;
    for (int i = 0; i < n-1; ++i) {
        ans = min(ans, left[i] + right[i+1]);
    }
    ans = min(ans, left[n-1]);
    ans = min(ans, right[0]);
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
