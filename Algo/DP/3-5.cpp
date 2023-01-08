#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, M;
    cin >> N >> M;

    vector<int> W(N);
	rep (i, 0, N) cin >> W[i];

    const int INF = 10000000;  // 十分大きい値とする
    vector<vector<int>> dp(N+1, vector<int>(M+1, INF));

    dp[0][0] = 0;

	rep (i, 0, N) {
		rep (j, 0, M+1) {
            if (dp[i][j] == INF) continue;

            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);

            if (j+W[i] <= M) {
                dp[i+1][j+W[i]] = min(dp[i+1][j+W[i]], 1 + dp[i][j]);
            }
        }
    }

    if (dp[N][M] != INF) cout << dp[N][M] << endl;
    else cout << -1 << endl;
	return 0;
}
