#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	vector<vector<int>> vec(4, vector<int>(4, 0));

	rep (i, 0, 4) cin >> vec[0][i];

	rep (i, 0, 3) {
		rep (j, 0, 4) {
			int tmp = vec[i][j];
			if (j >= 1) vec[i+1][j-1] += tmp;
			vec[i+1][j] += tmp;
			if (j <= 2) vec[i+1][j+1] += tmp;
		}
	}
	printf("%d\n", vec[3][3]);
	return 0;
}
