#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
    int N, M, color;
    cin >> N >> M;

    vector<int> W(N);
    vector<vector<int>> C(256, vector<int>(0));
    rep (i, 0, N) cin >> W[i];
    rep (i, 0, N) {
        cin >> color;
        C[color].push_back(W[i]);
    }

    vector<vector<bool>> dp(256 + 1, vector<bool>(M + 1, false));
    dp[0][0] = true;

    rep (c, 0, 256) {
        dp[c + 1] = dp[c];

        for(auto ball_w : C[c]) {
            rep (w, 0, M+1) {
                if (dp[c][w] == false) continue;
                if(w + ball_w <= M) dp[c+1][w+ball_w] = true;
            }
        }
    }
    if(dp[256][M]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
