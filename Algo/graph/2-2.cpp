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

void dfs(const Graph &G, int v) {
	seen[v] = true;
	printf("%d ", v);

	for (auto next_v : G[v]) {
		if (seen[next_v]) continue;
		dfs(G, next_v);
	}
}

int main() {
	int N, a;
	cin >> N;

	Graph G(N);
	seen.assign(N, false);
	rep (i, 1, N) {
		cin >> a;
		G[i].push_back(a);
		G[a].push_back(i);
	}

	dfs(G, 0);
	return 0;
}
