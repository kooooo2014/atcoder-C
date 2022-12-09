#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N, ans = 0, minchar = 51;
	string s;
	cin >> N;

	vector<vector<int>> vec(N, vector<int>(26, 0));
	rep (i, 0, N) {
		cin >> s;
		rep (j, 0, (int)s.size()) {
			vec[i][s[j] - 97] ++;
		}
	}

	rep (i, 0, 26) {
		minchar = 51;
		rep (j, 0, N) {
			minchar = min(minchar, vec[j][i]);
		}
		rep (j, 0, minchar) {
			printf("%c", i + 97);
		}
	}
	printf("\n");
	return 0;
}
