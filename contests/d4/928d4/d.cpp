#include <bits/stdc++.h>

using namespace std;

int mx = (1<<31)-1;
    

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            int b = a ^ mx;
            if (mp[b] > 0) {
                mp[b]--;
                continue;
            }
            mp[a]++;
            ++ans;
        }
        cout << ans << "\n";
    }
    return 0;
}
