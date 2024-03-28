#include <bits/stdc++.h>

using namespace std;

set<int> binaryDecimals;

bool isBinaryDecimal(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && digit != 1) {
            return false;
        }
        n /= 10;
    }
    return true;
}


void solve() {
    int n;
    cin >> n; 
    if (n == 1) {
        cout << "YES" << endl;
    }     
    for (auto i : binaryDecimals) {
        if (n % i == 0) {
            int last;
            while (n % i == 0) {
                n /= i;
                last = n;
                if (binaryDecimals.find(last) != binaryDecimals.end()) {
                    cout << "YES" << endl;
                    return;
                }
            }
            cout << "NO" << endl;
        }
    }
    cout << "NO" << endl; 
     
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 1; i <= 100000; ++i) {
        if (isBinaryDecimal(i)) {
            binaryDecimals.insert(i);
        }
    }    

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
