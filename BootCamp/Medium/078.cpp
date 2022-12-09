#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL K, first = 0, second = 0, ans = 0, stmp = 1, sstmp = 1;
	string s, ss;
	cin >> s >> K;

	ss = s + s;
	rep (i, 1, s.size()) {
		if (s[i] == s[i-1]) stmp ++;
		else stmp = 1;
		if (stmp != 0 && stmp % 2 == 0) first ++;
	}
	rep (i, 1, ss.size()) {
		if (ss[i] == ss[i-1]) sstmp ++;
		else sstmp = 1;
		if (sstmp != 0 && sstmp % 2 == 0) second ++;
	}

	if (stmp == (int)s.size() && (int)s.size() % 2 == 1) {
		ans = stmp * K / 2;
		printf("%lld\n", ans);
		return 0;
	}
	second -= first;
	ans = first + (K-1) * second;
	printf("%lld\n", ans);
	return 0;
}
