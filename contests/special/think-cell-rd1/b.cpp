#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 1; i <= n; ++i) {
        a.push_back(i);
    }
    for (int i = 0, j = (int) a.size()-1; i <= j; ++i, --j) {
        if (i != j) {
            cout << a[i] << " " << a[j] << " ";
        }
        else {
            cout << a[i] << " ";
        }
    }
    cout << endl;
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
