#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
using Graph = vector<vector<int>>;
queue<int> que;
vector<int> dist;
int N;

//木の直径を求める関数
int GetD(vector<vector<int>> &G) {
	int key = 0, max_dist = 0;

	dist[0] = 0;
	que.push(0);

	while (!que.empty()) {
		int v = que.front();
		que.pop();

		for (auto next_v : G[v]) {
			if (dist[next_v] != -1) continue;
			dist[next_v] = dist[v] + 1;
			que.push(next_v);
		}
	}

	rep (i, 0, N) {
		if (max_dist < dist[i]) {
			max_dist = dist[i];
			key = i;
		}
	}

	dist.assign(N, -1);
	dist[key] = 0;
	que.push(key);

	while (!que.empty()) {
		int v = que.front();
		que.pop();

		for (auto next_v : G[v]) {
			if (dist[next_v] != -1) continue;
			dist[next_v] = dist[v] + 1;
			que.push(next_v);
		}
	}
	max_dist = *max_element(all(dist));
	return max_dist;
}

int main() {
	int a, b, ans = 0;
	cin >> N;
	Graph G(N);
	dist.assign(N, -1);

	rep (i, 0, N-1) {
		cin >> a >> b;
		G[a-1].push_back(b-1);
		G[b-1].push_back(a-1);
	}

	ans = GetD(G);
	printf("%d\n", ans + 1);
	return 0;
}
