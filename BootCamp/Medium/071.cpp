#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL N, ans = 0, x = 0, y = 0, diff = 1000000000000000001, tmp = 0;
	cin >> N;

	vector<LL> vec(N);
	rep (i, 0, N) {
		cin >> vec[i];
		y += vec[i];
	}
	rep (i, 0, N-1) {
		x += vec[i];
		y -= vec[i];
		tmp = abs(y - x);
		diff = min(tmp, diff);
	}
	printf("%lld\n", diff);
	return 0;
}
