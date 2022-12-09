#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, tmp = 0, ans = 0;
	cin >> N;

	vector<int> vec(N);
	vector<int> count(N);

	rep (i, 0, N) cin >> vec[i];
	rep (i, 0, N) {
		if (i <= vec[i]) tmp = vec[i] - i;
		else tmp = N + vec[i] - i;

		if (tmp > 0) count[tmp-1] ++;
		else count[N-1] ++;

		count[tmp] ++;

		if (tmp < N-1) count[tmp+1] ++;
		else count[0] ++;
	}

	rep (i, 0, N) ans = max(ans, count[i]);
	cout << ans << endl;
	return 0;
}
