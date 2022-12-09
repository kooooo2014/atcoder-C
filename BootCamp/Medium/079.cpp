#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL N, M, ans = 1, mod = 1000000007;
	cin >> N >> M;

	if (abs(N-M) > 1) {
		printf("0\n");
	} else {
		rep (i, 1, N+1) {
			ans *= i;
			ans %= mod;
		}
		rep (i, 1, M+1) {
			ans *= i;
			ans %= mod;
		}
		if (N == M) ans = (ans * 2) % mod;
		printf("%lld\n", ans);
	}
	return 0;
}
