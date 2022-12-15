#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, Q;
	cin >> N;

	vector<vector<int>> vec(3, vector<int>(N+1, 0));
	rep (i, 1, N+1) {
		int C, P;
		cin >> C >> P;
		if (C == 1) {
			vec[1][i] = P + vec[1][i-1];
			vec[2][i] = vec[2][i-1];
		} else {
			vec[1][i] = vec[1][i-1];
			vec[2][i] = P + vec[2][i-1];
		}
	}

	cin >> Q;
	rep (i, 0, Q) {
		int L, R;
		cin >> L >> R;
		printf("%d ", vec[1][R] - vec[1][L-1]);
		printf("%d\n", vec[2][R] - vec[2][L-1]);
	}
	return 0;
}
