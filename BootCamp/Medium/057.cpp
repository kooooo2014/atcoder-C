#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N;
	LL ans = 0;
	string s;
	cin >> N;

	unordered_map<string, LL>mp;
	rep (i, 0, N) {
		cin >> s;
		sort(s.begin(), s.end());
		mp[s] ++;
	}

	for(auto it = mp.begin(); it != mp.end(); it++) {
		ans += it->second * (it->second - 1) / 2;
	}
	printf("%lld\n", ans);
	return 0;
}
