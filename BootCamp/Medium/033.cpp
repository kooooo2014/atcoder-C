#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	string s, ans;
	cin >> s;

	rep (i, 0, s.size()) {
		if (s[i] == 'B' && ans.size() > 0) ans.pop_back();
		else if (s[i] != 'B') ans += s[i];
	}
	rep (i, 0, ans.size()) printf("%c", ans[i]);
	printf("\n");
	return 0;
}
