#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	string s;
	cin >> s;
	LL ans = 2 * (s.size() - 1);

	rep (i, 1, s.size()-1) {
		if (s[i] == 'U') {
			ans += s.size() - (i + 1);
			ans += i * 2;
		} else {
			ans += i;
			ans += (s.size() - (i + 1)) * 2;
		}
	}
	cout << ans << endl;
	return 0;
}
