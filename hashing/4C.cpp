#include <bits/stdc++.h>

using namespace std;

unordered_map<string, int> mp;
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (mp.find(s) != mp.end()) {
            mp[s]++;
            cout << s + to_string(mp[s]) << "\n";
        }
        else {
            mp[s] = 0;
            cout << "OK" << "\n";
        }
    }
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();

    return 0;
}
