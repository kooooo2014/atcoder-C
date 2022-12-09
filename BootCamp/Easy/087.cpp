#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, tmp, ans = 0;
	cin >> N;

	rep (i, 0, N) {
		cin >> tmp;
		ans += tmp - 1;
	}
	cout << ans << endl;
	return 0;
}
