#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, M, ans = -1;
	cin >> N >> M;

    vector<int> W(N), V(N);
	rep (i, 0, N) cin >> W[i];
	rep (i, 0, N) cin >> V[i];

    vector<vector<int>> dp(N+1, vector<int>(M+1, -1));
    dp[0][0] = 0;

	rep (i, 0, N) {
		rep (j, 0, M+1) {
            if (dp[i][j] == -1) continue;

            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);

            if (j+W[i] <= M) {
                dp[i+1][j+W[i]] = max(dp[i+1][j+W[i]], V[i] + dp[i][j]);
            }
        }
    }

    rep (i, 0, M+1) ans = max(ans, dp[N][i]);
    printf("%d\n", ans);
	return 0;
}
