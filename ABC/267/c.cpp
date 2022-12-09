#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, M;
	LL ans = 0, tmp = 0;
	cin >> N >> M;

	vector<LL> diff(N);
	vector<LL> vec(N);
	rep (i, 0, N) cin >> vec[i];
	rep (i, 1, N) diff[i-1] = vec[i] - vec[i-1];
	rep (i, 0, M) tmp += (i + 1) * vec[i];

	rep (i, 0, (N-M+1)) {
		tmp += -1 * diff[i] + diff[i+M-2];
		ans = max(tmp, ans);
		printf("tmp:%lld, diff[%d]:%lld diff[%d]:%lld  \n", tmp, i, diff[i], i+M-2, diff[i+M-2]);
	}
	printf("%lld\n", ans);
	return 0;
}
