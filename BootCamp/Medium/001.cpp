#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, ans = 0, a, b, tmp;
	cin >> N;

	vector<vector<int>> vec(N+1, vector<int>(2));
	rep (i, 1, N+1) {
		vec[i][0] = i;
		cin >> vec[i][1];
	}
	a = vec[1][0];
	b = vec[1][1];
	for (int i = 1; i <= N; i++) {
		if (b == 2) {
			cout << ans + 1 << endl;
			return 0;
		}else{
			ans ++;
			tmp = b;
			a = vec[tmp][0];
			b = vec[tmp][1];
		}
	}
	cout << -1 << endl;
	return 0;
}
