#include <bits/stdc++.h>

using namespace std;

struct Compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first !=b.first) return a.first < b.first;
        return a.second > b.second;
    }
};

void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i <n; ++i) {
        cin >> a[i];
    }
    unordered_map<int, int>track;
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
    for (int i = 0; i < n; ++i) {
        if (track.find(a[i] + i + 1) != track.end()) {
            pq.push({a[i]+i+1 - track[a[i]+i+1], i+1});
        }
        else {
            pq.push({a[i]+i+1, i+1});
        }
        track[a[i]+i+1]++;
    }
    set<int> idx;
    set<int> S;
    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();
        int val = top.first;
        int index = top.second;

        idx.insert(index);
        auto it = idx.find(index); 
        if (S.find(val) != S.end()) {
            int whereit = distance(idx.begin(), it);
            val -= whereit;
        }
        S.insert(val);
    }
    vector<int>b;
    for (auto it = S.rbegin(); it != S.rend(); ++it) {
        b.push_back(*it);
    }
    for (int i : b) {
        cout << i << " ";
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
