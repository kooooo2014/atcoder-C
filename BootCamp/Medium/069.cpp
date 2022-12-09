#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL N, A, B, C, D, E, MIN = 10000000000000000, ans = 0;
	cin >> N >> A >> B >> C >> D >> E;

	MIN = min(A, B);
	MIN = min(MIN, C);
	MIN = min(MIN, D);
	MIN = min(MIN, E);
	if (N % MIN > 0) ans = N / MIN + 5;
	else ans = N / MIN + 4;

	printf("%lld\n", ans);
	return 0;
}
