#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <stdio.h>
#include <sstream>
#include <math.h>
#include <iomanip>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
using Graph = vector<vector<int>>;
vector<bool> seen;
vector<int> depth;

void dfs(const Graph &G, int v, int d) {
	seen[v] = true;
    depth[v] = d;
	d ++;

	for (auto next_v : G[v]) {
		if (seen[next_v]) continue;
		dfs(G, next_v, d);
	}
}

int main() {
	int N, a, ans = 0;
	cin >> N;
	Graph G(N);
	seen.assign(N, false);
	depth.assign(N, 0);

	rep (i, 1, N) {
		cin >> a;
		G[i].push_back(a);
		G[a].push_back(i);
	}

	dfs(G, 0, 0);
	rep (i, 0, N) ans = max(ans, depth[i]);
	printf("%d", ans);
	return 0;
}
