#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long LL;

int main() {
	LL X, Y, ans = 0;
	cin >> X >> Y;

	while (Y >= X) {
		Y /= 2;
		ans ++;
	}
	cout << ans << endl;
	return 0;
}
