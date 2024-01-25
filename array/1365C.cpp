#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    map<int, int>st;
    for (int i = 0; i < n; ++i) {
        st[a[i]] = i;
    }
    map<int, int>offset;
    for (int i = 0; i < n; ++i) {
        int of = st[b[i]] - i;
        if (of < 0) of += n;
        offset[of]++;
    }
    int ans = -1;
    for (auto i : offset) {
        ans = max(ans, i.second);
    }
    cout << ans << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
