#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, M, ans = 0;
	cin >> N >> M;

	vector<int> weight(N);
	rep (i, 0, N) cin >> weight[i];

    vector<vector<bool>> dp(N+1, vector<bool>(M+1, false));
    dp[0][0] = true;

	rep (i, 0, N) {
		rep (j, 0, M+1) {
            if (!dp[i][j]) continue;

            dp[i+1][j] = true;

            if (j+weight[i] <= M) dp[i+1][j+weight[i]] = true;
        }
    }

    if (dp[N][M]) printf("Yes\n");
    else printf("No\n");
	return 0;
}
