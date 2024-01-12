#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int solved = 0;
    int arr[26];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i) {
        char c = s[i];
        arr[c-'A']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (arr[i] >= i + 1) {
            solved++;
        }
    }
    cout << solved << "\n";
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
