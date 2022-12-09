#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	LL N;
	cin >> N;

	vector<vector<int>> vec(N+2, vector<int>(N+2, 0));
	vector<vector<int>> bornus(N+2, vector<int>(N+2, 0));
	rep (i, 1, N) {
		rep (j, 1, N) {
			cin >> bornus[i][j];
			vec[i][j] = bornus[i][j];
		}
	}

	rep (i, 1, N+1) {
		revrep (j, N, 1) {
			vec[i][j] += min(vec[i+1][j], vec[i][j+1]);
		}
	}
	printf("%lld\n", vec[N][1]);
	return 0;
}
