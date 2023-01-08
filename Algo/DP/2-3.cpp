#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N;
	cin >> N;

	vector<vector<int>> bornus(N, vector<int>(3, 0));
	vector<vector<int>> vec(N, vector<int>(3, 0));
	rep (i, 0, N) {
        rep (j, 0, 3) {
            cin >> bornus[i][j];
            if (i == 0) vec[0][j] = bornus[i][j];
        }
    }

	rep (i, 1, N) {
		vec[i][0] = bornus[i][0] + max(vec[i-1][1], vec[i-1][2]);
		vec[i][1] = bornus[i][1] + max(vec[i-1][0], vec[i-1][2]);
		vec[i][2] = bornus[i][2] + max(vec[i-1][0], vec[i-1][1]);
        printf("%d %d %d\n", vec[i][0], vec[i][1], vec[i][2]);
	}
	printf("%d\n", max(max(vec[N-1][0], vec[N-1][1]), vec[N-1][2]));
	return 0;
}
