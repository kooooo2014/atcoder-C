#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int W, H, N, x, y, a;
	cin >> W >> H >> N;
	int xmin = 0, xmax = W, ymin = 0, ymax = H;

	rep (i, 0, N) {
		cin >> x >> y >> a;
		if (a == 1) xmin = max(x, xmin);
		else if (a == 2) xmax = min(x, xmax);
		else if (a == 3) ymin = max(y, ymin);
		else ymax = min(y, ymax);
	}
	if (xmin <= xmax && ymin <= ymax) {
		x = xmax - xmin;
		y = ymax - ymin;
		printf("%d\n", x * y);
	} else printf("0\n");
	return 0;
}
