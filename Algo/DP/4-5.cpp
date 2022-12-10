#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
const int INF = 1<<30;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(2, vector<int>(N));
    rep (i, 0, 2) {
        rep (j, 0, N) {
            cin >> A[i][j];
        }
    }

    vector<vector<int>> dp(N + 1, vector<int>(4, INF));
    dp[0][3] = 0;

    rep (i, 0, N) {
        // 塗り方 1 の隣は、塗り方 2 か 3 である
        dp[i+1][1] = min({dp[i][2], dp[i][3]}) + A[0][i];

        // 塗り方 2 の隣は、塗り方 1 か 3 である
        dp[i+1][2] = min({dp[i][1], dp[i][3]}) + A[1][i];

        // 塗り方 3 の隣は、塗り方 1, 2 または 3 である
        dp[i+1][3] = min({dp[i][1], dp[i][2], dp[i][3]}) + A[0][i] + A[1][i];
    }

    int ans = min({dp[N][1], dp[N][2], dp[N][3]});
    cout << ans << endl;
    return 0;
}
