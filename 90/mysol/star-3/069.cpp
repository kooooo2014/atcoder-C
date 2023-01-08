#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
const int INF = 1 << 30;
const LL MOD = 1000000007;

LL binpower(LL a, LL b) {
	LL ans = 1;
	while (b != 0) {
		if (b % 2 == 1) {
			ans = ans * a % MOD;
		}
		a = a * a % MOD;
		b /= 2;
	}
	return ans;
}

int main() {
	LL N, K, ans = 0;
	cin >> N >> K;

	if (N == 1) {
		ans = K % MOD;
	} else if (K == 1) {
		ans = 0;
	} else if (N == 2) {
		ans = K * (K-1) % MOD;
	} else {
		ans = (K * (K-1) % MOD) * binpower(K-2, N-2);
	}
	printf("%lld\n", ans % MOD);
	return 0;
}
