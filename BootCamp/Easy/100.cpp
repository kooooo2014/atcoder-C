#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, j, ans = 0;
	cin >> N;

	vector<vector<int>> vec(N+1, vector<int>(2));
	rep (i, 1, N+1) {
		vec[i][0] = i;
		cin >> vec[i][1];
	}
	rep (i, 1, N+1) {
		j = vec[i][1];
		if(vec[i][0] == vec[j][1]) ans ++;
	}
	cout << ans / 2 << endl;
	return 0;
}
