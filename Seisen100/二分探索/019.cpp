#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int binary_search(vector<int> &a, int key) {
	int ng = -1;
	int ok = (int)a.size();

	while (abs(ok - ng) > 1) {
		int mid = (ok + ng) / 2;
		if (a[mid] >= key) ok = mid;
		else ng = mid;
	}
	return ok;
}

int main() {
	int D, N, M, tmp, bin;
	LL ans = 0;
	cin >> D >> N >> M;

	vector<int> shop(N+1);
	shop[0] = 0;
	shop[N] = D;
	rep (i, 1, N) cin >> shop[i];
	sort(shop.begin(), shop.end());

	rep (i, 0, M) {
		cin >> tmp;
		bin = binary_search(shop, tmp);
		if (bin > 0) ans += min(abs(tmp - shop[bin]), abs(tmp - shop[bin-1]));
		else ans += abs(tmp - shop[0]);
	}
	printf("%lld\n", ans);
	return 0;
}
