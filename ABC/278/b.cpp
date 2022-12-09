#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int h, m, A, B;
	cin >> h >> m;
	A = h / 10;
	B = h % 10;

	if (A <= 1 && B > 5) {
		A ++;
		h = A * 10;
		m = 0;
	} else if (A == 2 && m >= 40) {
		h ++;
		m = 0;
	}
	if (h == 24) h = 0;
	printf("%d %d\n", h, m);
	return 0;
}
