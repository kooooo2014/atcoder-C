#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL N, ans = 0, T = 0;
	cin >> N >> ans;

	rep (i, 1, N) {
		cin >> T;
		ans = lcm(T, ans);
	}
	printf("%lld\n", ans);
	return 0;
}
