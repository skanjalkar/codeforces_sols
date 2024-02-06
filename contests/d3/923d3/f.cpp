#include <bits/stdc++.h>

using namespace std;

struct Hash {
    size_t operator()(const pair<int, int>& p) const {
        return hash<int>()(p.first) ^ hash<int>()(p.second);
    }
};

void solve() {
    int n, m;
    cin >> n >> m;
    // graph
    unordered_map<int, vector<pair<int, int>>> g;
    unordered_map<pair<int, int>, int, Hash> edges;
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        edges[{u, v}] = w;
        g[u].push_back({v, w});
        edges[{v, u}] = w;
        g[v].push_back({u, w});
    }

    // find all cycles
    vector<bool> vis(n + 1, false);
    vector<int> parent(n + 1, -1);
    // cycle stores min weight and number of vertices in the cycle
    vector<pair<int, int>> cycle;

    // dfs to find cycle
    function<void(int, int)> dfs = [&](int u, int p) {
        if (vis[u]) return;
        vis[u] = true;
        for (auto v : g[u]) {
            if (v.first == p) continue;
            if (vis[v.first]) {
                // cycle found
                int x = u, y = v.first;
                int w = edges[{x, y}];
                int cnt = 0;
                for (int i : parent) {
                    cout << i << " ";
                }
                cout << endl;
                while (x != -1) {
                    x = parent[x];
                    w = min(w, edges[{x, parent[x]}]);
                    ++cnt;
                }
                cycle.push_back({w, cnt});
                return;
            }
            parent[v.first] = u;
            dfs(v.first, u);
        }
    };

    for (auto v : g) {
        dfs(v.first, -1);
    }

    // sort cycles by weight
    sort(cycle.begin(), cycle.end());
    cout << cycle[0].first << " " << cycle[0].second << endl;
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
