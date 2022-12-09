#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL N, M;
	cin >> N >> M;

	if (N == 2 || M == 2) printf("0\n");
	else if (N == 1 || M == 1) {
		if (N > 1) printf("%lld\n", N - 2);
		else if (M > 1) printf("%lld\n", M - 2);
		else printf("1\n");
	} else printf("%lld\n", (N - 2) * (M - 2));
	return 0;
}
