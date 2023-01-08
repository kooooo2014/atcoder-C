#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	LL N, ans = 0;
	cin >> N;

	vector<LL> A(N);
	vector<LL> B(N);
	rep (i, 0, N) cin >> A[i];
	rep (i, 0, N) cin >> B[i];
	sort(all(A));
	sort(all(B));

	rep (i, 0, N) ans += abs(A[i] - B[i]);
	printf("%lld ", ans);
	return 0;
}
