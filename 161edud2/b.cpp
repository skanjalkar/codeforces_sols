#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long ans = 0;
    // a + b > c
    // a + c > b
    // b + c > a
    // log(ab) > log(c) -> a[i]*b[i]*log(2)*log(2) > c[i]*log(2) -> a[i]*b[i] > c[i]/log(2);
    // a^[2i] + b^[2i] > c^2[i] => atleast 2 should have same power, else not possible
    map<long long, long long>st;
    for (int i = 0; i < n; ++i) {
        st[a[i]]++;
    }
    long long sum = 0;
    for (auto it : st) {
        long long count = it.second;
        if (count >= 3) {
            ans += count * (count - 1) * (count - 2) / 6;
        }
        if (count >= 2) {
            ans += count * (count - 1) * sum / 2;
        }
        sum += count;
    }
    cout << ans << endl;
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
