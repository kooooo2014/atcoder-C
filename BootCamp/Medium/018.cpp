#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int ab = 0, a2, a3, b2, b3;

	vector<vector<int>> vec(3, vector<int>(3));
	rep (i, 0, 3) {
		rep (j, 0, 3) {
			cin >> vec[i][j];
		}
	}
	a2 = vec[1][0] - vec[0][0];
	a3 = vec[2][0] - vec[1][0];
	b2 = vec[0][1] - vec[0][0];
	b3 = vec[0][2] - vec[0][1];
	rep (i, 0, 3) {
		if (vec[i][1] - vec[i][0] != b2 || vec[i][2] - vec[i][1] != b3 || vec[1][i] - vec[0][i] != a2 || vec[2][i] - vec[1][i] != a3) {
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
}
