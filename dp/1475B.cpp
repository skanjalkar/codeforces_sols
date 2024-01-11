#include <bits/stdc++.h>

using namespace std;

bool mp[1000001] = {false};
int solve(int i, int n) {
    if (i == n) {
        return true;
    }
    if (i > n) {
        return false;
    }
    if (mp[i]) {
        return mp[i];
    }
    bool ans = solve(i + 2020, n) || solve(i + 2021, n);
    mp[i] = ans;
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (solve(0, n)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}