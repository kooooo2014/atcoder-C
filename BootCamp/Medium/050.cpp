#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL L, R, tmp1, tmp2, tmp, ans = 2019;
	cin >> L >> R;

	rep (i, L, R+1) {
		tmp1 = i % 2019;
		rep (j, i+1, R+1) {
			tmp2 = j % 2019;
			tmp = tmp1 * tmp2 % 2019;
			ans = min(ans, tmp);
			if (ans == 0) {
				printf("0\n");
				return 0;
			}
		}
	}

	printf("%lld\n", ans);
	return 0;
}
