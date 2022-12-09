#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2;
	int X = 0, Y = 0;

	X = x2 - x1;
	Y = y2 - y1;
	x3 = x2 - Y;
	y3 = y2 + X;
	x4 = x1 - Y;
	y4 = y1 + X;

	printf("%d %d %d %d\n", x3, y3, x4, y4);
	return 0;
}
