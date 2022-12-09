#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, MAX = 0, ans = 0;
    cin >> N;

    vector<int> W(N);
	rep (i, 0, N) {
        cin >> W[i];
        MAX += W[i];
    }

    vector<vector<bool>> dp(N+1, vector<bool>(MAX+1, false));

    dp[0][0] = true;

	rep (i, 0, N) {
		rep (j, 0, MAX+1) {
            if (!dp[i][j]) continue;

            dp[i+1][j+W[i]] = true;
            dp[i+1][abs(j-W[i])] = true;
        }
    }
    while (!dp[N][ans]) ++ans;
    printf("%d\n", ans);
	return 0;
}
