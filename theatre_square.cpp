#include<bits/stdc++.h>
using namespace std;

void solve(uint64_t n, uint64_t m, uint64_t a) {
    uint64_t ans;
    ans = ((m+a-1)/a)*((n+a-1)/a);
    printf("%ld", ans);
    assert(1000000000000000000 == ans);
    return;
}

int main() {
    uint64_t n, m, a;
    cin >> n >> m >> a;
    solve(n, m, a);
    return 0;
}