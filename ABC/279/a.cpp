#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int ans = 0;
	string s;
	cin >> s;
	rep (i, 0, (int)s.size()) {
		if (s[i] == 'v') ans += 1;
		else ans += 2;
	}
	cout << ans << endl;
	return 0;
}
