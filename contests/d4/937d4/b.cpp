#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<char>> mx(2*n, vector<char>(2*n));
    char ist = '#';
    bool swap = false;
    bool sswap = false;
    for (int i = 0; i < 2*n; i+=2) {
        if (i != 0  && i % 2 == 0) {
            sswap = !sswap;
            swap = sswap;
        }
        for (int j = 0; j < 2*n; j+=2) {
            if (swap) {
                ist = '.';
            }
            else {
                ist = '#';
            }
            mx[i][j] = ist;
            mx[i][j+1] = ist;
            swap = !swap;
        }
        mx[i+1] = mx[i];
       
    }
    for (int i = 0; i < 2*n; ++i) {
        for (int j = 0; j < 2*n; ++j) {
            cout << mx[i][j];
        }
        cout << endl;
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
