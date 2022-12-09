#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;
using Graph = vector<vector<int>>;
deque<int> deq;
vector<bool> seen;

void dfs(const Graph &G, int v, int last) {
	deq.push_back(v);
	if (v == last) {
		rep (i, 0, deq.size()) printf("%d ", deq[i]);
		printf("\n");
		exit(0);
	}
	seen[v] = true;

	for (auto next_v : G[v]) {
		if (seen[next_v]) continue;
		dfs(G, next_v, last);
		deq.pop_back();
	}
}

int main() {
	int N, x, y, a, b;
	cin >> N >> x >> y;
	seen.resize(N+1);
	Graph G(N+1);

	rep (i, 0, N-1) {
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	dfs(G, x, y);
	return 0;
}
