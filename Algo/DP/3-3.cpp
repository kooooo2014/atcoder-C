#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, M, ans = 0;
	cin >> N >> M;

	vector<int> move(N-1);
	rep (i, 0, N-1) cin >> move[i];

	vector<int> point(N-1);
	rep (i, 0, N-1) cin >> point[i];

    vector<vector<int>> dp(N, vector<int>(M, -1));
    dp[0][0] = 0;

	rep (i, 0, N-1) {
		rep (j, 0, M) {
            if (dp[i][j] == -1) continue;

            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);

            if (j+move[i] < M) {
                dp[i+1][j+move[i]] = max(dp[i+1][j+move[i]], point[i] + dp[i][j]);
            }
        }
    }

    printf("%d\n", dp[N-1][M-1]);
	return 0;
}
