#include <bits/stdc++.h>

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


void solve() {
    long long n, k, a, b;
    cin >> n >> k >> a >> b;
    --a; --b;
    vector<pair<long long, long long>> major(k);
    vector<pair<long long, long long>> arr(n);
    for (int i = 0; i < n; ++i) {
        long long x, y;
        cin >> x >> y;
        if (i < k) major[i] = {x, y};
        arr[i] = {x, y};
    }
    if (a < k && b < k) {
        cout << 0 << endl;
        return;
    }
    auto x = [&](long long start) -> long long {
        long long dis = 10000000000;
        long long sx, sy;
        sx = arr[start].first;
        sy = arr[start].second;
        for (int i = 0; i < k; ++i) {
            long long xi, yi;
            xi = major[i].first;
            yi = major[i].second;
            dis = min(dis, abs(xi-sx) + abs(yi-sy));
        }
        return dis;
    };
    long long ans = 10000000000;
    if (k > 0) {
        long long disA = x(a);
        long long disB = x(b);
        ans = disA + disB;
    }

    ans = min(ans, abs(arr[a].first - arr[b].first) + abs(arr[a].second - arr[b].second));
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
