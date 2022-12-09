#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
    int N, M;
    const int INF = 10000000;
    cin >> N >> M;

    vector<int> W(N);
    rep (i, 0, N) cin >> W[i];

    vector<vector<vector<bool>>> dp(N+1, vector<vector<bool>>(M+1, vector<bool>(2, false)));
    dp[0][0][0] = true;

    rep (i, 0, N) {
        rep (weight, 0, M+1) {
            rep (j, 0, 2) {
                if (!dp[i][weight][j]) continue;

                dp[i+1][weight][j] = true;

                if (weight + W[i] <= M) {
                    if (j == 0) dp[i+1][weight+W[i]][1] = true;
                    if (j == 1) dp[i+1][weight+W[i]][0] = true;
                }
            }
        }
    }
    if (dp[N][M][1]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
