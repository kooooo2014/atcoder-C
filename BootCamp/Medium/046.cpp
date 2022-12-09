#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	string s;
	cin >> s;

	vector<int> vec(3, 0);
	rep (i, 0, s.size()) {
		if (s[i] == 'a') vec[0] ++;
		else if (s[i] == 'b') vec[1] ++;
		else vec[2] ++;
	}
	if (abs(vec[0] - vec[1]) <= 1 && abs(vec[0] - vec[2]) <= 1 && abs(vec[1] - vec[2]) <= 1) printf("YES\n");
	else printf("NO\n");
	return 0;
}
