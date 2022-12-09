#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, M, ans = 0;
	cin >> N >> M;

	vector<vector<int>> vec(N, vector<int>(M, 0));
	vector<int> A(N);
	rep (i, 0, N-1) cin >> A[i];

	vec[0][0] = 1;

	rep (i, 0, N-1) {
		rep (j, 0, M) {
			if (vec[i][j]) vec[i+1][j] = 1;
			else if (j + A[i] < M) vec[i+1][j+A[i]] = 1;
            printf("%d ", vec[i][j]);
		}
        printf("\n");
	}
	rep (i, 0, M) if (vec[N-1][i] == 1) ans ++;
	printf("%d\n", ans);
	return 0;
}
