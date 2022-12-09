#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, X, ans = 0, tmp = 0;
	cin >> N >> X >> ans;
	ans = abs(X - ans);

	rep (i, 1, N) {
		cin >> tmp;
		tmp = abs(X - tmp);
		ans = gcd(ans, tmp);
	}
	cout << ans << endl;
	return 0;
}
