#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
map<int, int> memo;

int main() {
	int N, M, t, mintmp = 1000000000;
	cin >> N >> M;
	vector<int> time(N);

	rep (i, 0, N) cin >> time[i];

	rep (i, 0, N) {
		if (i == 0) {
			memo[i] = 0;
			continue;
		}
		mintmp = 1000000000;
		for (int j = 1; j <= i && j <= M; j ++) {
			t = time[i];
			mintmp = min(memo[i-j] + (t * j), mintmp);
		}
		memo[i] = mintmp;
	}
	cout << memo[N-1] << endl;
	return 0;
}
