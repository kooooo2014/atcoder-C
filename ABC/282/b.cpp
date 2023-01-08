#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, M, ans = 0, tmp = 0;
	char c;
	cin >> N >> M;

	vector<vector<int>> vec(N, vector<int>(M));
	rep (i, 0, N) {
		rep (j, 0, M) {
			cin >> c;
			if (c == 'o') vec[i][j] = 1;
			else vec[i][j] = 0;
		}
	}
	rep (i, 0, N) {
		rep (j, i+1, N) {
			tmp = 0;
			rep (k, 0, M) {
				if (vec[i][k] == 1 || vec[j][k] == 1) tmp ++;
			}
			if (tmp == M) ans ++;
		}
	}
	cout << ans << endl;
	return 0;
}
