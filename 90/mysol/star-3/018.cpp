#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	double T, L, X, Y, Z, ans = 0, XY = 0;
	int Q, E;
	cin >> T >> L >> X >> Y >> Q;

	XY = pow(X*X + Y*Y, 1/2);
	rep (i, 0, Q) {
		cin >> E;
		Z = (E / T) * L;
		printf("%lld\n", ans);
	}
	return 0;
}
