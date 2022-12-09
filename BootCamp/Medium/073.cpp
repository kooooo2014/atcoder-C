#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	LL a, b, c, ans = 0, d = 0;
	cin >> a >> b >> c;
	d = c - a - b;

	if (d > 0 && 4 * a * b < d * d) printf("Yes\n");
	else printf("No\n");
	return 0;
}
