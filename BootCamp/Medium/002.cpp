#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL Bcount = 0, ans = 0;
	string s;
	cin >> s;

	rep (i, 0, s.size()) {
		if(s[i] == 'B') Bcount ++;
		else {
			ans += Bcount;
		}
	}
	cout << ans << endl;
	return 0;
}
