#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
using Graph = vector<vector<int>>;

int main() {
	int N, M, a, b, ans = 0;
	cin >> N >> M;
	Graph G(N+1);

	rep (i, 0, M) {
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	rep (i, 1, N+1) {
		int flag = 0;
		rep (j, 0, G[i].size()) {
			if (i > G[i][j]) flag ++;
		}
		if (flag == 1) ans ++;
	}
	printf("%d\n", ans);
	return 0;
}
