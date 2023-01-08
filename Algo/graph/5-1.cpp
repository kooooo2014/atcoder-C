#include <bits/stdc++.h>
using namespace std;
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
	int N, M, s, t;
	cin >> N >> M >> s >> t;

	Graph G(N);
    seen.assign(N, false);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
	}
    dfs(G, s);
    if (seen[t]) printf("Yes\n");
    else printf("No\n");
    return 0;
}
