#include <bits/stdc++.h>
#include <vector>

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


int nx[4] = {-1, 0, 1, 0};
int ny[4] = {0, 1, 0, -1};
bool findSafeWalk(vector<vector<int>>& grid, int health) {
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    const int n = (int) grid.size();
    const int m = (int) grid[0].size();
    vector<vector<int>>dp(n, vector<int>(m, -(int)1e7));
    dp[0][0] = health - grid[0][0];
    pq.push({dp[0][0], {0, 0}});
    auto valid = [&](int x, int y) {
        if (x >= 0 && x < n && y >= 0 && y < m) {
            return true;
        }
        return false;
    };
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    while (!pq.empty()) {
        auto curr = pq.top(); pq.pop();
        int curr_health = curr.first;
        int x = curr.second.first;
        int y = curr.second.second;
        if (x == n-1 && y == m-1 && curr_health >= 1) {
            return true;
        }
        for (int i = 0; i < 4; ++i) {
            int nxt_x = x + nx[i];
            int nxt_y = y + ny[i];
            auto check = valid(nxt_x, nxt_y);
            if (check) {
                int nxt_val = dp[nxt_x][nxt_y];
                if (nxt_val < curr_health - grid[nxt_x][nxt_y]) {
                    dp[nxt_x][nxt_y] = curr_health - grid[nxt_x][nxt_y];
                    if (dp[nxt_x][nxt_y] > 0) {
                        pq.push({dp[nxt_x][nxt_y], {nxt_x, nxt_y}});
                    }
                }
            }
        }
        debug(dp);
    }
    return false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Input: grid = [[1,1,1],[1,0,1],[1,1,1]], health = 5
    // Output: true
    vector<vector<int>> grid = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int health = 5;
    cout << findSafeWalk(grid, health) << endl;

    return 0;
}
