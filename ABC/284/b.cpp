#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int T, N, ans = 0, tmp;
	cin >> T;

	rep (i, 0, T) {
		ans = 0;
		cin >> N;
		rep (j, 0, N) {
			cin >> tmp;
			if (tmp % 2 == 1) ans ++;
		}
		cout << ans << endl;
	}
	return 0;
}
