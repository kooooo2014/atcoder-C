#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, ans = 0, X, Y, x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> N;

	vector<vector<int>> vec(N, vector<int>(2));
	rep (i, 0, N) cin >> vec[i][0] >> vec[i][1];
	sort(vec.begin(), vec.end());

	for (int i = 0; i < N; i ++) {
		for (int j = i + 1; j < N; j ++) {
			x1 = vec[i][0]; y1 = vec[i][1];
			x2 = vec[j][0]; y2 = vec[j][1];
			X = vec[j][0] - vec[i][0];
			Y = vec[j][1] - vec[i][1];
			x3 = x2 - Y; y3 = y3 + X;
			x4 = x1 - Y; y4 = y1 + X;
			//ここで２分探索して点3.4があるかどうかを探す
		}
	}
	printf("Yes\n");

	return 0;
}
