#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int H, W, ans = 0;
	string s;
	cin >> H >> W;

	rep (i, 0, H) {
		cin >> s;
		rep (j, 0, W) {
			if (s[j] == '#') ans ++;
		}
	}
	cout << ans << endl;
	return 0;
}
