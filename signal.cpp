#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    char c;
    string s;
    cin >> n >> c >> s;
    s += s;
    int maxi = 0, count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            count = 0;
            while (s[i] != 'g' && i < s.size()) {
                count++;
                i++;
            }
            if (count > maxi) {
                maxi = count;
            }
        }
    }
    cout << maxi << "\n";

}

int main(){
    int t;
    cin>> t;
    while (t>0) {
        solve();
        t--;
    }
    return 0;
}