#include <bits/stdc++.h>

using namespace std;

pair<int, int> ok(int num) {
    string tmp = to_string(num);
    for (int i = 0; i < tmp.size() - 1; ++i) {
        if (tmp[i] > tmp[i+1]) return {-1,-1};
    }
    const int m = tmp.size();
    return {tmp[0]-'0', tmp[m-1]-'0'};
}

void solve() {
    int n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; ++i) {
        cin >> ans[i];
    }
    int mx = ans[n-1];
    for (int i = n-2; i >= 0; --i) {
        if (ans[i] > mx) {
            pair<int, int> tmp = ok(ans[i]);
            if (tmp.first == -1 || tmp.second > mx) {
                cout << "NO" << "\n";
                return;
            }
            mx = tmp.first;
        }
    }
    cout << "YES" << "\n";
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
