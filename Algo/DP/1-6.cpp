#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, tmp = 0;
	cin >> N;

	vector<vector<int>> vec(N+2, vector<int>(N+2, 0));
	rep (i, 1, N+1) cin >> vec[1][i];

	rep (i, 1, N+1) {
		rep (j, 1, N+1) {
			tmp = vec[i][j];
			vec[i+1][j-1] += tmp;
			vec[i+1][j] += tmp;
			vec[i+1][j+1] += tmp;
		}
	}
	printf("%d\n", vec[N][N] % 100);
	return 0;
}
