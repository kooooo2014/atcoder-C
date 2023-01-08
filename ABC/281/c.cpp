#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

LL binary_search(vector<LL> &a, LL key) {
	LL ng = -1;
	LL ok = (LL)a.size();

	while (abs(ok - ng) > 1) {
		LL mid = (ok + ng) / 2;
		if (a[mid] >= key) ok = mid;
		else ng = mid;
	}
	return ok;
}

int main() {
	LL N, T, tmp = 0, ans = 0, sum = 0;
	cin >> N >> T;

	vector<LL> vec(N);
	cin >> vec[0];
	rep (i, 1, N) {
		cin >> tmp;
		vec[i] = vec[i-1] + tmp;
	}
	sum = vec[N-1];
	ans = binary_search(vec, (T % sum));

	if (ans == 0) printf("%lld %lld\n", ans + 1, T % sum);
	else printf("%lld %lld\n", ans + 1, (T % sum) - vec[ans-1]);
	return 0;
}
