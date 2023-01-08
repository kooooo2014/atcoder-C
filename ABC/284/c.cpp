#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
using Graph = vector<vector<int>>;
vector<bool> seen;

void dfs(const Graph &G, int v) {
	seen[v] = true;

	for (auto next_v : G[v]) {
		if (seen[next_v]) continue;
		dfs(G, next_v);
	}
}

int main() {
	int N, M, ans = 0;
	cin >> N >> M;

	Graph G(N);
	seen.assign(N, false);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		G[a-1].push_back(b-1);
		G[b-1].push_back(a-1);
	}

	rep (i, 0, N) {
		if (!seen[i]) {
			dfs(G, i);
			ans ++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
