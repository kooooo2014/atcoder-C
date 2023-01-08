#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int H, W;
	char tmp;
	cin >> H >> W;

	vector<vector<int>> vec(H+2, vector<int>(W+2, 0));
	rep (i, 1, H+1) {
		rep (j, 1, W+1) {
			cin >> tmp;
			if (tmp == '#') {
				rep (k, j - 1, j + 2) vec[i-1][k] ++;
				vec[i][j-1] ++;
				vec[i][j] = -100;
				vec[i][j+1] ++;
				rep (k, j - 1, j + 2) vec[i+1][k] ++;
			}
		}
	}
	rep (i, 1, H+1) {
		rep (j, 1, W+1) {
			if (vec[i][j] < 0) printf("#");
			else printf("%d", vec[i][j]);
		}
		printf("\n");
	}
	return 0;
}
