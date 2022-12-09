#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	LL N;
	cin >> N;

	vector<vector<int>> vec(N, vector<int>(N, 0));
	vector<vector<int>> bornus(N, vector<int>(N, 0));
	rep (i, 0, N) {
		rep (j, 0, N) {
			cin >> bornus[i][j];
		}
	}

	vec[0][0] = bornus[0][0];

	rep (i, 0, N) {
		rep (j, 0, N) {
			if (i == 0) vec[i][j] = vec[i][j-1] + bornus[i][j];
			else if (j == 0) vec[i][j] = vec[i-1][j] + bornus[i][j];
			else vec[i][j] = max(vec[i-1][j], vec[i][j-1]) + bornus[i][j];
		}
	}
	printf("%lld\n", vec[N-1][N-1]);
	return 0;
}
