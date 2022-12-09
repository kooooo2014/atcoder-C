#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

using Graph = vector<vector<int>>;
vector<bool> seen;
vector<int> pre;

void dfs(const Graph &G, int v) {
	seen[v] = true;

	for (auto next_v : G[v]) {
		if (seen[next_v]) continue;
		pre[next_v] = v;
		dfs(G, next_v);
	}
}

int main() {
	int N, M, s, t;
	cin >> N >> M >> s >> t;

	Graph G(N);
    seen.assign(N, false);
	pre.assign(N, -1);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
	}
    dfs(G, s);

	vector<int> ans;
	int now = t;
	while (now != -1) {
		ans.push_back(now);
		now = pre[now];
	}

	reverse(all(ans));
	rep (i, 0, ans.size()) {
		printf("%d", ans[i]);
		if (i != (int)ans.size() - 1) printf(" ");
	}
    return 0;
}
