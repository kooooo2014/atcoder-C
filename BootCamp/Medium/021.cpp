#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;
unordered_map<LL, LL> memo;

int main() {
	int N;
	LL ans = 0, tmp;
	cin >> N;

	vector<int> vec(N);
	rep (i, 0, N) {
		cin >> vec[i];
		memo[vec[i]] ++;
	}
	for(auto it = memo.begin(); it != memo.end(); it++) {
		tmp = it->second;
		ans += tmp * (tmp - 1) / 2;
	}
	rep (i, 0, N) {
		tmp = memo[vec[i]];
		printf("%lld\n", ans - (tmp - 1));
	}
	return 0;
}
