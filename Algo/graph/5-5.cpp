#include <bits/stdc++.h>
using namespace std;
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
	cin >> N >> M;

	Graph G(N);
	color.assign(N, -1);

	rep (i, 0, M) {
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	rep (i, 0, N) {
		if (color[i] != -1) continue;
		que.push(i);
		color[i] = 0;

		while (!que.empty()) {
			int v = que.front();
			que.pop();

			for (auto next_v : G[v]) {
				if (color[next_v] != -1) {
					if (color[next_v] == color[v]) {
						cout << "No" << endl;
						return 0;
					}
					continue;
				}
				color[next_v] = 1 - color[v];
				que.push(next_v);
			}
		}
	}
	cout << "Yes" << endl;
    return 0;
}
