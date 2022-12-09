#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	LL K, A, B, tmp, ans = 0;
	cin >> K >> A >> B;

	tmp = K;
	K = K - A - 1;
	if (K >= 0) ans = B + (K / 2 * (B - A)) + K % 2;
	printf("%lld\n", max(tmp + 1, ans));
	return 0;
}
