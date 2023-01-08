#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int H, W, Height = 0;
	bool deleteFlag = true;
	cin >> H >> W;

	vector<vector<char>> vec(H, vector<char>(W));
	vector<bool> height(H, false);
	vector<bool> width(W, false);
	rep(i, 0, H) {
		rep(j, 0, W) {
			cin >> vec[i][j];
			if (vec[i][j] == '#') width[i] = true;
		}
	}
	rep(j, 0, W) {
		rep(i, 0, H) {
			if (vec[i][j] == '#') height[j] = true;
		}
	}
	rep(i, 0, H) {
		rep(j, 0, W) {
			if (width[i] == true && height[j] == true) cout << vec[i][j];
		}
		if (width[i] == true) printf("\n");
	}
	return 0;
}
