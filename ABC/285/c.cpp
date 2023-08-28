#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	LL ans = 0;
	string S;
	cin >> S;
	reverse(all(S));

	rep (i, 0, S.size()) {
		ans += (LL)pow(26, i) * (LL)(S[i] - 'A' + 1);
	}
	cout << ans << endl;
	return 0;
}
