#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	string s, t;
	cin >> s >> t;

	sort(s.begin(), s.end());
	sort(t.begin(), t.end(), greater<int>());
	int N = min(s.size(), t.size());

	rep (i, 0, N) {
		if (s[i] > t[i]) {
			printf("No\n");
			return 0;
		}
		else if (s[i] < t[i]) {
			printf("Yes\n");
			return 0;
		}
	}
	if (s.size() >= t.size()) printf("No\n");
	else printf("Yes\n");
	return 0;
}
