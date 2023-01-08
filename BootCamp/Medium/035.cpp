#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	LL A, B, C, D, ans, CD;
	cin >> A >> B >> C >> D;

	CD = C * D / gcd(C, D);
	A --;
	ans = (B - B/C - B/D + B/CD) - (A - A/C - A/D + A/CD);
	printf("%lld\n", ans);
	return 0;
}
