#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	LL x, y, ans = 0;
	cin >> x >> y;

	if (x <= y) ans = y - x;
	else if (x >= 0) ans = y - x + 1;
	else if (x < 0) ans = y - x + 2;
	printf("%lld\n", ans);
	return 0;
}
