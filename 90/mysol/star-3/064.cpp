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
	int N, Q, L, R, V;
	LL ans = 0;
	cin >> N >> Q;
	vector<LL> A(N+1);
	vector<LL> diff(N);

	rep (i, 1, N+1) cin >> A[i];
	rep (i, 1, N) {
		diff[i] = A[i+1] - A[i];
		ans += abs(diff[i]);
	}

	rep (i, 0, Q) {
		cin >> L >> R >> V;
		L --;

		LL before = abs(diff[L]);
		if (R <= N-1) before += abs(diff[R]);

		if (L >= 1) diff[L] += V;
		if (R <= N-1) diff[R] -= V;

		LL after = abs(diff[L]);
		if (R <= N-1) after += abs(diff[R]);

		ans += (after - before);
		printf("%lld\n", ans);
	}

	return 0;
}
