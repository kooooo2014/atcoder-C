#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, count = 0, ans = 0;
	string s;
	cin >> N >> s;

	vector<int> X(26, 0);
	vector<int> Y(26, 0);
	rep (i, 0, s.size()) X[s[i] - 'a'] ++;
	rep (i, 0, s.size()) {
		if (X[s[i] - 'a'] >= 2 && Y[s[i] - 'a'] == 0) count ++;
		else if (X[s[i] - 'a'] == 1 && Y[s[i] - 'a'] >= 1) count --;
		X[s[i] - 'a'] --;
		Y[s[i] - 'a'] ++;
		ans = max(count, ans);
	}
	cout << ans << endl;
	return 0;
}
