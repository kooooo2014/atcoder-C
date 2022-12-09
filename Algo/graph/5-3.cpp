#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

using Graph = vector<vector<int>>;
vector<bool> seen;
vector<int> pre;
queue<int> que;
vector<int> ans;

int main() {
	int N, M, s, t, a, b;
	cin >> N >> M >> s >> t;

	Graph G(N);
    seen.assign(N, false);
	pre.assign(N, -1);

	for (int i = 0; i < M; ++i) {
		cin >> a >> b;
		G[a].push_back(b);
	}

    que.push(s);
	seen[s] = true;

	while (!que.empty()) {
		int v = que.front();
		que.pop();

		for (auto next_v: G[v]) {
			if (seen[next_v]) continue;
			seen[next_v] = true;
			pre[next_v] = v;

			if (next_v == t) break;
			que.push(next_v);
		}
	}

	int now = t;
	while (now != -1) {
		ans.push_back(now);
		now = pre[now];
	}

	reverse(all(ans));

	printf("%d\n", (int)ans.size());
	rep (i, 0, ans.size()) {
		printf("%d", ans[i]);
		if (i != (int)ans.size() - 1) printf(" ");
	}
    return 0;
}
