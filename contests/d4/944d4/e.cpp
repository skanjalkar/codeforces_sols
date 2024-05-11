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
    int n, k, q;
    cin >> n >> k >> q;
    vector<long long>a(k+1, 0), b(k+1, 0);
    for (int i = 0; i < k; ++i) {
        cin >> a[i+1];
    }
    for (int i = 0; i < k; ++i) {
        cin >> b[i+1];
    }
    for (int i = 0; i < q; ++i) {
        long long d; cin >> d;
        int l = 0, r = k;
        while (l <= r) {
            int mid = (l + r) >> 1;
            if (a[mid] > d) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        if (a[r] == d) {
            cout << b[r] << " ";
        }
        else {
            long long ans = b[r] + (d-a[r]) * (b[r+1] - b[r]) / (a[r+1] - a[r]);
            cout << ans << " ";
        }
    }
    cout << endl;
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
