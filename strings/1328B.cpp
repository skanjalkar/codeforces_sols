#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    string s(n, 'a');
    for (int i = n - 2; i >= 0; --i) {
        if (k <= (n - i - 1)) {
            s[i] = 'b';
            s[n-k] = 'b';
            break;
        }
        k -= (n - i - 1);
    }
    cout << s << endl; 
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
