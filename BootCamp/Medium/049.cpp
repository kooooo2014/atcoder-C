#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;
map<int, int> memo;

int main() {
	LL N, ans = 0, tmp;
	cin >> N;

	vector<int> vec(0);
	rep (i, 0, N) {
		cin >> tmp;
		memo[tmp] ++;
		if (memo[tmp] == 2) {
			memo[tmp] = 0;
			vec.push_back(tmp);
		}
	}

	if (vec.size() > 1) {
		sort(vec.begin(), vec.end(), greater<int>());
		ans = (LL)vec[0] * (LL)vec[1];
	} else ans = 0;
	printf("%lld\n", ans);
	return 0;
}
