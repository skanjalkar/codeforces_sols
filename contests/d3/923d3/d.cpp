#include <bits/stdc++.h>

using namespace std;

// segment tree
struct SegmentTree {
    int n;
    vector<int> st;

    SegmentTree(int n) : n(n) {
        st.assign(4 * n, 0);
    }

    void update(int p, int l, int r, int i, int v) {
        if (i < l || i > r) return;
        if (l == r) {
            st[p] = v;
            return;
        }
        int m = (l + r) / 2;
        update(2 * p, l, m, i, v);
        update(2 * p + 1, m + 1, r, i, v);
        st[p] = st[2 * p] + st[2 * p + 1];
    }

    int query(int p, int l, int r, int i, int j) {
        if (i > r || j < l) return 0;
        if (l >= i && r <= j) return st[p];
        int m = (l + r) / 2;
        return query(2 * p, l, m, i, j) + query(2 * p + 1, m + 1, r, i, j);
    }
};

/*
You are given an array 𝑎 of 𝑛 integers, and 𝑞

queries.

Each query is represented by two integers 𝑙
and 𝑟 (1≤𝑙≤𝑟≤𝑛). Your task is to find, for each query, two indices 𝑖 and 𝑗

(or determine that they do not exist) such that:
𝑙≤𝑖≤𝑟
𝑙≤𝑗≤𝑟
𝑎𝑖≠𝑎𝑗
In other words, for each query, you need to find a pair of different elements among 𝑎𝑙,𝑎𝑙+1,…,𝑎𝑟
, or report that such a pair does not exist.
*/

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        // need to use segment tree to store 
    }
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
