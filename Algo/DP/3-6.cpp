#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, A, B;
    cin >> N >> A >> B;

    vector<int> X(N);
	rep (i, 0, N) cin >> X[i];

    vector<vector<bool>> dp(N+1, vector<bool>(A, false));

    dp[0][0] = true;

	rep (i, 0, N) {
		rep (j, 0, A) {
            if (!dp[i][j]) continue;

            dp[i+1][j] = true;
            dp[i+1][(j+X[i]) % A] = true;
        }
    }
    if (dp[N][B]) printf("Yes\n");
    else printf("No\n");
	return 0;
}
