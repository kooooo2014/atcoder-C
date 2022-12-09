#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, timeTmp = 0, x = 0, y = 0;
	cin >> N;

	vector<int> time(N+1);
	vector<vector<int>> XY(N+1, vector<int>(2));
	time[0] = 0;
	XY[0][0] = 0;
	XY[0][1] = 0;
	rep (i, 1, N+1) {
		cin >> time[i];
		cin >> XY[i][0] >> XY[i][1];
	}
	rep (i, 1, N+1) {
		timeTmp = abs(time[i] - time[i-1]);
		x = abs(XY[i][0] - XY[i-1][0]);
		y = abs(XY[i][1] - XY[i-1][1]);
		if (timeTmp < (x + y) || timeTmp % 2 != (x + y) % 2) {
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
}
