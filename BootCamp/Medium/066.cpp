#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL N, tmp, ans = 0;
	cin >> N;
	vector<LL> A(N), B(N);
	rep (i, 0, N) cin >> A[i] >> B[i];

	for (int i = N-1; i >= 0; i--) {
		ans += (B[i] - ((A[i] + ans) % B[i])) % B[i];
	}
	printf("%lld\n", ans);
	return 0;
}
