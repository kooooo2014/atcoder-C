#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

using Graph = vector<vector<int>>;
vector<int> color;
queue<int> que;

int main() {
	int N, M, a, b;
	bool is_bipartite = true;
	LL ans = 0;
	cin >> N >> M;

	Graph G(N);
	color.assign(N, -1);
	vector<vector<int>> vec(N, vector<int>(M, -1));

	rep (i, 0, M) {
		cin >> a >> b;
		G[a-1].push_back(b-1);
		G[b-1].push_back(a-1);
		vec[a-1][b-1] = 1;
		vec[b-1][a-1] = 1;
	}

	rep (i, 0, N) {
		if (color[i] != -1) continue;
		que.push(i);
		color[i] = 0;

		while (!que.empty() && is_bipartite) {
			int v = que.front();
			que.pop();

			for (auto next_v : G[v]) {
				if (color[next_v] != -1) {
					if (color[next_v] == color[v]) {
						is_bipartite = false;
						break;
					}
					continue;
				}
				color[next_v] = 1 - color[v];
				que.push(next_v);
			}
		}
		if (is_bipartite == false) break;
	}

	if (is_bipartite) {
		rep (i, 0, N) {
			rep (j, i+1, N) {
				if (vec[i][j] != 1 && color[i] != color[j]) ans ++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
