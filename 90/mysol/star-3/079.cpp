#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int H, W;
	cin >> H >> W;
	LL ans = 0;

	vector<vector<int>> A(H, vector<int>(W));
	vector<vector<int>> B(H, vector<int>(W));
	vector<vector<int>> Diff(H, vector<int>(W));
	rep (i, 0, H) {
		rep (j, 0, W) cin >> A[i][j];
	}
	rep (i, 0, H) {
		rep (j, 0, W) cin >> B[i][j];
	}
	rep (i, 0, H) {
		rep (j, 0, W) Diff[i][j] = A[i][j] - B[i][j];
	}

	rep (i, 0, H-1) {
		rep (j, 0, W-1) {
			int tmp = -Diff[i][j];
			Diff[i][j+1] += tmp;
			Diff[i+1][j] += tmp;
			Diff[i+1][j+1] += tmp;
			ans += abs(tmp);
		}
		if (Diff[i][W-1] != 0) {
			printf("No\n");
			return 0;
		}
	}

	printf("Yes\n%lld\n", ans);
	return 0;
}
