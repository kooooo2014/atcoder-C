#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, ans = 0, a, count = 0, zero = 0, one = 0, others = 0;
	cin >> N;

	rep (i, 0, N) {
		cin >> a;
		count = 0;
		while (a % 2 == 0) {
			a /= 2;
			count ++;
		}
		if (count == 0) zero ++;
		else if (count == 1) one ++;
		else others ++;
	}
	if (zero - 1 > others) printf("No\n");
	else if (one >= 1 && zero - 1 == others) printf("No\n");
	else printf("Yes\n");
	return 0;
}
