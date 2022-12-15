#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
map<LL, LL> mp;

int main() {
	int N, K, D;
	cin >> N >> K >> D;

	vector<int> A(N);
     rep (i, 0, N) cin >> A[i];

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
