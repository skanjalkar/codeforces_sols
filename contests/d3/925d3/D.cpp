#include <bits/stdc++.h>

using namespace std;

struct Hash {
    size_t operator()(const pair<int, int>& p) const {
        return hash<int>()(p.first) ^ hash<int>()(p.second) + 0x9e3779b9 + (hash<int>()(p.first) << 6) + (hash<int>()(p.first) >> 2);
    }
};

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int>a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<pair<int, int>, int, Hash> pos;
    set<pair<int, int>, Hash> both;
    for (int i = 0; i < n; ++i) {
        int first = a[i] % x;
        int second = a[i] % y;
        pos[{first, second}]++;
        both.insert({first, second});
    }

    // new map which is reverse of both
    vector<pair<int, int>> rev;
    vector<pair<int, int>> st;
    for (auto it = both.begin(); it != both.end(); ++it) {
        st.push_back(*it);
    }
    for (auto it = both.rbegin(); it != both.rend(); ++it) {
        rev.push_back(*it);
    }

    int ans = 0;

    int i = 0, j = 0;
    while (i < st.size() && j < rev.size()) {
        if ((st[i].first + rev[j].first) % x == 0 && (st[i].second + rev[j].second) % y == 0) {
            if (st[i] == rev[j]) {
                ans += pos[st[i]] * (pos[st[i]] - 1) / 2;
            } else {
                ans += pos[st[i]] * pos[rev[j]];
            }
            i++;
            j++;
        }
        else if ((st[i].first + rev[j].first) % x > 0) {
            --j;
        }
        else {
            ++i;
        }
    }

    cout << ans << endl;

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
