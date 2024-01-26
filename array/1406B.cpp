#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    int neg = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < 0) ++neg;
    }
    vector<long long> ans;
    sort(a, a+n);
    long long temp = 1;
    for (int i = 0; i < 4; ++i) {
        temp *= a[i];
        if (i == 1) {
            ans.push_back(temp * a[n-3]*a[n-2]*a[n-1]);
        }
        if (i == 3) {
            ans.push_back(temp * a[n-1]);
        }
    }
    temp = 1;
    for (int i = n-1; i >= n-5; --i) {
        temp *= a[i];
    }
    ans.push_back(temp);
    cout << *max_element(ans.begin(), ans.end()) << endl;
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
