#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int H, W;
	cin >> H >> W;

	vector<string> S(H);
	vector<string> T(H);
	vector<string> tS(W);
	vector<string> tT(W);

	rep (i, 0, H) cin >> S[i];
	rep (i, 0, H) cin >> T[i];

	rep (i, 0, W) {
		rep (j, 0, H) {
			tS[i] += S[j][i];
			tT[i] += T[j][i];
		}
	}
	sort(all(tS)); sort(all(tT));

	rep (i, 0, W) {
		if (tS[i] != tT[i]) {
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
}
