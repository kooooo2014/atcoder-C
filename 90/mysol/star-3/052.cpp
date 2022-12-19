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

int main() {
	int N, a;
	LL ans = 1;
	cin >> N;
	vector<LL> A(N, 0);

	rep (i, 0, N) {
		rep (j, 0, 6) {
			cin >> a;
			A[i] += a;
		}
		ans *= A[i] % MOD;
		ans %= MOD;
	}

	printf("%lld\n", ans);
	return 0;
}
