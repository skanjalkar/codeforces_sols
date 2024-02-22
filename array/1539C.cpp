#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    long long k, x;
    cin >> n >> k >> x;
    vector<long long>a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long ans = 0;
    vector<long long> diff;
    for (int i = 1; i < n; ++i) {
        if (a[i] - a[i-1] > x) {
            ++ans;
            diff.push_back(ceil((a[i]-a[i-1])/x)-1);
        }
    }
    sort(diff.begin(), diff.end());
    for (int i : diff) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < diff.size(); ++i) {
        if (k - diff[i] >= 0) {
            --ans;
            k -= diff[i];
        }
    }
    cout << ans << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();

    return 0;
}
