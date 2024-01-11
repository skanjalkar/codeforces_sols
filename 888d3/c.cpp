#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int c[n];
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }
    unordered_map<int, vector<int>> m;
    for (int i = 0; i < n; ++i) {
        m[c[i]].push_back(i);
    }
    int start = c[0];
    int end = c[n-1];
    if (m[start].size() < k || m[end].size() < k) {
        cout << "NO" << "\n";
        return;
    }
    if (start == end && m[start].size() >= k) {
        cout << "YES" << "\n";
        return;
    }
    if (m[start].size() == k && m[end].size() == k && start != end) {
        if (m[start][k-1] > m[end][0]) {
            cout << "No" << "\n";
            return;
        }
    }
    // cout << m[start][k-1] << " " << m[end][m[end].size()-1-(k-1)] << "\n";
    if (m[start][k-1] > m[end][m[end].size()-1-(k-1)]) {
        cout << "No" << "\n";
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
    return 0;
}