#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int ans = 0;
	string s;
	cin >> s;

	rep (i, 1, s.size()) {
		if (s[i-1] != s[i]) ans ++;
	}
	cout << ans << endl;
	return 0;
}
