#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, ans = 0, count = 0;
	string s, t, stmp, ttmp;
	cin >> N >> s >> t;

	rep (i, 0, N) {
		stmp = s.substr(i, N-i);
		ttmp = t.substr(i, N-i);
		printf("stmp[%d]: %c\n", i, ttmp[0]);
		if (stmp == ttmp) {
			cout << 2 * N - (N - i) << endl;
			return 0;
		}
	}
	cout << 2 * N << endl;
	return 0;
}
