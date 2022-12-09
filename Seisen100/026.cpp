#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;
using Graph = vector<vector<int>>;
vector<LL> counter;

void dfs(Graph &G, int v) {

	for (auto next_v : G[v]) {

		dfs(G, next_v);
	}
}

int main() {
	int N, Q;
	cin >> N >> Q;

	Graph G(N);
	counter.resize(N);
	for (int i = 0; i < N-1; i ++) {
		int a, b;
		cin >> a >> b;
		a --; b --;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	for (int i = 0; i < Q; i ++) {
		int p, x;
		cin >> p >> x;
		p --;
		counter[p] += x;
	}

	dfs(G, 0);

	for (int i = 0; i < N; i ++) {
		if (i != 0) printf(" ");
		printf("%lld", counter[i]);
	}
	printf("\n");
	return 0;
}

