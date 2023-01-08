#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	LL N, ans = 1000000000001, tmp;
	cin >> N;

	vector<int> vec(N);

	rep (i, 0, N) cin >> vec[i];
	sort(all(vec));

	for (int i = vec[i]; i <= vec[N-1]; i ++) {
		tmp = 0;
		rep (j, 0, N) tmp += (i - vec[j]) * (i - vec[j]);
		ans = min(ans, tmp);
	}
	printf("%lld\n", ans);
	return 0;
}
