#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

using Graph = vector<vector<int>>;
vector<int> color;

bool dfs(const Graph &G, int v, int col = 0) {
	color[v] = col;

	for (auto next_v : G[v]) {
		if (color[next_v] != -1) {
			if (color[next_v] == col) return false;
			continue;
		}
		if (!dfs(G, next_v, 1 - col)) return false;
	}
	return true;
}

int main() {
	int N, M, a, b;
	bool is_bipartite = true;
	cin >> N >> M;

	Graph G(N);
	rep (i, 0, M) {
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	color.assign(N, -1);

	rep (v, 0, N) {
		if (color[v] != -1) continue;
		if (!dfs(G, v)) is_bipartite = false;
	}

	if (is_bipartite) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
