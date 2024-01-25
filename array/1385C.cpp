#include <bits/stdc++.h>

using namespace std;

void solve() {
    // 1 3 1 4 5 3 2
    // 2 pointers?
    // itearte from back, find the point where it stops (which is the largest element)
    // then iterate from front, if you find a element such that a[i] > a[i+1] and i+1 != j, need to atleast delete till i
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int i, j;
    for (j = n - 1; j >= 1; --j) {
        if (a[j] > a[j-1]) {
            break;
        }
    }
    i = -1;
    for (int st = 0; st < j; ++st) {
        if (a[st] > a[st+1] && (st+1 != j)) {
            i = st;
        }
    }
    cout << i + 1 << endl;
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
