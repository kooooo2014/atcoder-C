#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int W, H, x, y;
	cin >> W >> H >> x >> y;

	printf("%lf ", (double)W * (double)H / 2);

	if (W == x * 2 && H == y * 2) printf("1\n");
	else printf("0\n");
	return 0;
}
