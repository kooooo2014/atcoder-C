#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int H, W;
	char a;
	cin >> H >> W;

	for (int i = 0; i < H + 2; i++) {
		for (int j = 0; j < W + 2; j ++) {
			if (i == 0 || i == H + 1) printf("#");
			else {
				if (j == 0 || j == W + 1)  printf("#");
				else {
					cin >> a;
					cout << a;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
