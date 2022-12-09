#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int X, Y, k;
	cin >> X >> Y;

	for (int i = Y / 10000; i >= 0; i--) {
		for (int j = (Y - i * 10000) / 5000; j >= 0; j--) {
			k = X - i - j;
			if (Y - (i * 10000 + j * 5000 + k * 1000) == 0) {
				printf("%d %d %d\n", i, j, k);
				return 0;
			}
		}
	}
	printf("-1 -1 -1\n");
	return 0;
}
