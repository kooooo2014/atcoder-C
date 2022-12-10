#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	string S, T;
	cin >> S >> T;

	rep (i, 0, S.size()) {
		if (S[i] == T[i]) continue;
		else {
			printf("%d\n", i+1);
			return 0;
		}
	}
	printf("%d\n", (int)T.size());
	return 0;
}
