#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, j = n - 1;
    int cnt0 = 0;
    for (const char &c : s) {
        if (c == '0') cnt0++;
    }
    if (2*cnt0 != n) {
        cout << "-1" << endl;
        return;
    }
    int idx = 0;
    vector<int> z;
    deque<char> q;
    for (const char &c : s) {
        q.push_back(c);
    }
    while (!q.empty()) {
        if (q.front() == q.back()) {
            if (q.front() == '0') {
                q.push_back('0');
                q.push_back('1');
                z.push_back(n-idx);
            }
            else {
                q.push_front('1');
                q.push_front('0');
                z.push_back(0+idx);
            }
            n += 2;
        }
        while (!q.empty() && (q.front() != q.back())) {
            q.pop_front();
            q.pop_back();
            ++idx;
        }
    }
    if (z.size() > 300) {
        cout << "-1" << endl;
    }
    cout << z.size() << endl;
    for (int i = 0; i < z.size(); ++i) {
        if (i == z.size() - 1) {
            cout << z[i];
        }
        else {
            cout << z[i] << " ";
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
