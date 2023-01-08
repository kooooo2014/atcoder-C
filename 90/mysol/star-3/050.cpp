#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
const int INF = 1 << 30;
const int MOD = 1000000007;

int main() {
	LL N, L;
	cin >> N >> L;
	vector<LL> dp(N+1, 0);

	dp[0] = 1;
	rep (i, 0, N) {
		if (dp[i] == 0) continue;

		dp[i+1] += dp[i] % MOD;
		if (i + L <= N) dp[i+L] += dp[i] % MOD;
	}

	printf("%lld\n", dp[N] % MOD);
	return 0;
}
