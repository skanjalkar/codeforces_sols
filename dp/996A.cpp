#include <bits/stdc++.h>

using namespace std;
long long a[] = {1, 5, 10, 20, 100};

int main() {
	long long n;
	cin >> n;

	long long ans = 0;

	for (int i = 4; i >= 0; i--) {
		if (n >= a[i]) {
			ans += n / a[i];
			n %= a[i];
		}
	}

	cout << ans << endl;

	return 0;
}
