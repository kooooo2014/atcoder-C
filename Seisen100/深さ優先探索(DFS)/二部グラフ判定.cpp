#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;


using Graph = vector<vector<int>>;
/*color[v] = 1 (黒確定)、0 (白確定)、-1 (未訪問)*/
vector<int> color;

bool dfs(const Graph &G, int v, int cur = 0) {
	color[v] = cur;

	for (auto next_v : G[v]) {
		// 隣接頂点がすでに色確定していた場合
		if (color[next_v] != -1) {
			//同じ色が隣接するのはダメ
			if (color[next_v] == cur) return false;
			continue;
		}
		// 隣接頂点の色を変えて、再帰的に探索 (一回でも false が返ってきたら false)
		if (!dfs(G, next_v, 1 - cur)) return false;
	}
	return true;
}

int main() {
	int N, M;
	cin >> N >> M;

	Graph G(N);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	color.assign(N, -1);
	bool is_bipartite = true;//二部グラフかどうか
	for (int v = 0; v < N; ++v) {
		if (color[v] != -1) continue;
		if (!dfs(G, v)) is_bipartite = false;
	}

	if (is_bipartite) cout << "Yes" << endl;
    else cout << "No" << endl;
}
