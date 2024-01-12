#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    memset(dp, 0, sizeof(dp));
    // dp[i] represnts the number of unique substrings that can be made by removing ith element
    // transition dp[i] = dp[i-2] + dp[i-1] if (s[i] != s[i-1] && s[i
    
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
