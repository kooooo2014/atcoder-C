#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N, K;
	long double tmp, ans;
	cin >> N >> K;

	vector<long double> vec(N);
	rep (i, 0, N) {
		cin >> tmp;
		vec[i] = (tmp + 1) / 2;
	}
	rep (i, 1, N) vec[i] += vec[i-1];
	ans = vec[K-1];
	for (int i = K; i < N; i++) {
		tmp = vec[i] - vec[i-K];
		ans = max(ans, tmp);
	}
	printf("%.12Lf\n", ans);
	return 0;
}
