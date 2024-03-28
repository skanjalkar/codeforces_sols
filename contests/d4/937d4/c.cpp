#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int hours = stoi(s.substr(0, 2));
    string mins = s.substr(3);
    if (hours > 12) {
        if (hours - 12 < 10) {
            cout << "0" << hours - 12 << ":" << mins << " PM" << endl;
        }
        else {
            cout << hours - 12 << ":" << mins << " PM" << endl;
        }
    }
    else if (hours == 12 || hours == 0) {
        if (hours == 0) {
            cout << "12:" << mins << " AM" << endl;
        }
        else {
            cout  << "12:" << mins << " PM" << endl;
        }
    }
    else {
        if (hours < 10) {  
            cout << "0" << hours << ":" << mins << " AM" << endl;
        }
        else {
            cout << hours << ":" << mins << " AM" << endl;
        }
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
