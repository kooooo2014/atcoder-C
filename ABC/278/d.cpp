#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N, Q, ans = 0, base = 0, t, a, x;
	cin >> N;

	unordered_map<int, int> mp;
	rep (i, 0, N) {
		cin >> mp[i];
	}
	cin >> Q;
	for (int i = 0; i < Q; i++) {
		cin >> t;
		if (t == 1) cin >> base;
		else if (t == 2) {
			cin >> a >> x;
			mp[a] += x;
		} else {

		}
	}
	cout << ans << endl;
	return 0;
}
