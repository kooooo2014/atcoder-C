#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N, P, tmp, odd;
	LL ans = 0;
	cin >> N >> P;

	rep (i, 0, N) {
		cin >> tmp;
		if (tmp % 2 == 1) odd ++;
	}
	if (odd == 0) {
		if (P == 0) ans = pow(2, N);
		else ans = 0;
	} else ans = pow(2, N-1);

	cout << ans << endl;
	return 0;
}
