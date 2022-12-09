#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int H, W, count = 0;
	char tmp;
	cin >> H >> W;

	vector<vector<char>> vec(H+2, vector<char>(W+2, '.'));
	rep (i, 1, H+1) {
		rep (j, 1, W+1) {
			cin >> tmp;
			if (tmp == '#') {
				count ++;
				vec[i][j] = '#';
			}
		}
	}
	if (count != (H + W - 1)) printf("Impossible\n");
	else {
		rep (i, 1, H+1) {
			rep (j, 1, W+1) {
				if (vec[i][j] == '#') {
					if (vec[i+1][j] == '.' && vec[i][j+1] == '.' && i != H && j != W) {
						printf("2Impossible\n");
						return 0;
					}
				}
			}
		}
		printf("Possible\n");
	}
	return 0;
}
