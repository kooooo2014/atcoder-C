#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, K, tmp;
	double ans = 0, count = 1;
	cin >> N >> K;

	rep (i, 1, N+1) {
		tmp = i;
		count = 1;
		while (K > tmp) {
			tmp *= 2;
			count /= 2;
		}
		ans += count / N;
	}
	printf("%.12f\n", ans);
	return 0;
}
