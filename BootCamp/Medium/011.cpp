#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N, M;
	LL tmp;
	cin >> N >> M;

	vector<vector<int>> gakusei(N, vector<int>(2));
	vector<vector<int>> checkPoint(M, vector<int>(2));
	vector<vector<LL>> ans(N, vector<LL>(2, 0));
	rep (i, 0, N) {
		cin >> gakusei[i][0] >> gakusei[i][1];
	}
	rep (i, 0, M) {
		cin >> checkPoint[i][0] >> checkPoint[i][1];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			tmp = abs(gakusei[i][0] - checkPoint[j][0]) + abs(gakusei[i][1] - checkPoint[j][1]);
			if (ans[i][1] == 0) {
				ans[i][0] = tmp;
				ans[i][1] = 1;
			}
			if (ans[i][0] > tmp) {
				ans[i][0] = tmp;
				ans[i][1] = j + 1;
			}
		}
	}
	rep (i, 0, N) {
		cout << ans[i][1] << endl;
	}
	return 0;
}
