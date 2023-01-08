#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n)-1; i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
LL N, ans = 0;
string S = "";
LL MOD = 1000000007;
vector<vector<LL>> dp(100009, vector<LL>(8, 0));

int main() {
	cin >> N >> S;

	dp[0][0] = 1;
	rev (i, 0, S.size()) {
		rev(j, 0, 8) {
			if (S[i] == 'a') {
				dp[i+1][j] += dp[i][j];
			}
			else if (S[i] == 't') vec[1] ++;
			else if (S[i] == 'c') vec[2] ++;
			else if (S[i] == 'o') vec[3] ++;
			else if (S[i] == 'd') vec[4] ++;
			else if (S[i] == 'e') vec[5] ++;
			else if (S[i] == 'r') vec[6] ++;
		}
	}

	revrep (i, N, 0) {

		// printf("%c", S[i]);
		printf("%lld %lld %lld %lld %lld %lld %lld\n", vec[0], vec[1], vec[2], vec[3], vec[4], vec[5], vec[6]);
	}

	printf("%lld\n", ans);
	return 0;
}

atcodeer
a t c o d e r
1 1 1 3 1 5 1

attcodeer
