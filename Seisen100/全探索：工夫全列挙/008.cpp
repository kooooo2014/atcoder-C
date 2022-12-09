#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (LL i = (s); i < (LL)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	LL N, ans = 0;
	cin >> N;

	vector<LL> A(N);
	vector<LL> B(N);
	rep (i, 0, N) {
		cin >> A[i] >> B[i];
		ans += B[i] - A[i];
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	LL j = N / 2;
	rep (i, 0, N) {
		ans += abs(A[j] - A[i]);
		ans += abs(B[j] - B[i]);
	}
	printf("%lld\n", ans);
	return 0;
}
