#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL ans = 0;
	int N, T, time = 0;
	cin >> N >> T;

	vector<int> vec(N);
	rep (i, 0, N) {
		cin >> vec[i];
	}
	rep (i, 1, N) {
		time = vec[i] - vec[i-1];
		ans += min(time, T);
	}
	ans += T;
	cout << ans << endl;
	return 0;
}
