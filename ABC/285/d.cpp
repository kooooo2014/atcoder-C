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
map<string, int> dist; //文字列の辞書番号が格納

int main() {
	int N, no = 1;
	string S, T;
	cin >> N;

	Graph G(2*N);
	vector<int> deg(2*N, 0);

	rep (i, 0, N) {
		cin >> S >> T;
		if (dist.find(S) == dist.end()) {
			dist[S] = no;
			no ++;
		}
		if (dist.find(T) == dist.end()) {
			dist[T] = no;
			no ++;
		}
		G[dist[S]].push_back(dist[T]);
		printf("%d\n", dist[S]);
		printf("%d\n", dist[T]);
		printf("%d\n", deg[dist[T]]);
		++deg[dist[T]];
	}

	for(auto it = dist.rbegin(); it != dist.rend(); it++) {
		printf("%d\n", it->second);
	}

	// 出次数が 0 であるようなソースをキューに入れる
	int num = 0;  // 除去された頂点の個数
	for (int v = 0; v < N; ++v) {
		if (deg[v] == 0) {
			que.push(v);
			++num;
		}
	}

	while (!que.empty()) {
		int v = que.front();
		que.pop();

		// 頂点 v に繋がる頂点 v2 の出次数を減らす
		for (auto v2 : G[v]) {
			--deg[v2];

			// もし v2 が新たにソースになるならキューに入れる
			if (deg[v2] == 0) {
				que.push(v2);
				++num;
			}
		}
	}

	// すべての頂点が除去されたなら Yes
	if (num == N) cout << "Yes" << endl;
	else cout << "No" << endl;
}
