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
	int N, M;
	cin >> N >> M;

	Graph G(N);
	seen.assign(N, false);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	rep (i, 0, N) sort(all(G[i]));
    dfs(G, 0);
}
