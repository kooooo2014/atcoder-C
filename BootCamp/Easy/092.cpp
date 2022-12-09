#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int zero = 0, one = 0, ans = 0;
	string s;
	cin >> s;

	rep (i, 0, s.size()) {
		if (s[i] == '0') zero ++;
		else one ++;
	}
	ans = min(zero, one) * 2;
	cout << ans << endl;
	return 0;
}
