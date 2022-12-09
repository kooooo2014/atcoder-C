#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	LL N, M, ans = 0, score = 0;
	cin >> N >> M;

	vector<vector<int>> vec(N, vector<int>(M));
	rep (i, 0, N) {
		rep (j, 0, M) {
			cin >> vec[i][j];
		}
	}
	rep (i, 0, M) {
		rep (j, i+1, M) {
			score = 0;
			rep (k, 0, N) {
				score += max(vec[k][i], vec[k][j]);
				ans = max(ans, score);
			}
		}
	}

	printf("%lld\n", ans);
	return 0;
}
