#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int H, W;
	cin >> H >> W;

	vector<vector<char>> vec(H+2, vector<char>(W+2, '.'));
	rep (i, 1, H+1) {
		rep (j, 1, W+1) {
			cin >> vec[i][j];
		}
	}
	rep (i, 1, H+1) {
		rep (j, 1, W+1) {
			if (vec[i][j] == '#') {
				if (vec[i-1][j] == '.' && vec[i+1][j] == '.' && vec[i][j-1] == '.' && vec[i][j+1] == '.') {
					printf("No\n");
					return 0;
				}
			}
		}
	}
	printf("Yes\n");
	return 0;
}
