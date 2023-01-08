#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL N, ans = 0, all = 0;
	cin >> N;

	vector<int> vec(N+2);
	rep (i, 0, N+2) {
		if (i == 0 || i == N + 1) vec[i] = 0;
		else cin >> vec[i];
	}
	rep (i, 1, N+2) all += abs(vec[i] - vec[i-1]);
	rep (i, 0, N) {
		ans = all - (LL)abs(vec[i]-vec[i+1]) - (LL)abs(vec[i+1]-vec[i+2]) + (LL)abs(vec[i+2]-vec[i]);
		printf("%lld\n", ans);
	}
	return 0;
}
