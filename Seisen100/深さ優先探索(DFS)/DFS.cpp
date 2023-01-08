 /*------------------深さ優先探索(DFS)の学習------------------*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;


/* ------------------入力データ------------------
N M
a0		b0
a1		b1
: 		:
am-1	bm-1
*/

// /*------------------ベース------------------*/
// using Graph = vector<vector<int>>;

// int baseDFS() {
// 	//頂点数、辺数
// 	int N, M;
// 	cin >> N >> M;

// 	//グラフ
// 	Graph G(N);
// 	for (int i = 0; i < M; ++i) {
// 		int a, b;
// 		cin >> a >>b;
// 		G[a].push_back(b);

// 		//無向グラフの場合は以下を追加
// 		// G[b].push_back(a);
// 	}
// }

/*------------------重み付きグラフ------------------*/
// struct Edge {
// 	int to;		//辺の行き先
// 	int weight; //辺の重み
// 	Edge(int t, int w) : to(t), weight(w) {}
// }

// using Graph = vector<vector<edge>>;

// int weightedDFS() {
// 	//頂点数、辺数
// 	int N, M;
// 	cin >> N >> M;

// 	//グラフ
// 	Graph G(N);
// 	for (int i = 0; i < M; ++i) {
// 		int from, to, weight;
// 		cin >> from >> to >> weight;
// 		G[from].push_back(Edge(to, weight));
// 	}
// }

/*------------------DFSテンプレート O(N+M)------------------*/
using Graph = vector<vector<int>>;
vector<bool> seen;
vector<int> first_order; // 行きがけ順
vector<int> last_order; // 帰りがけ順

void dfs(const Graph &G, int v, int& first_ptr, int& last_ptr) {
	// 行きがけ順をインクリメントしながらメモ
    first_order[v] = first_ptr++;

	seen[v] = true; //訪問済みならtrueにする

	// vの次に行ける頂点next_vに対して
	for (auto next_v : G[v]) {
		if (seen[next_v]) continue; //もしnext_vが訪問済みならスキップ
		dfs(G, next_v, first_ptr, last_ptr); //再帰的に繰り返す
	}

	// 帰りがけ順をインクリメントしながらメモ
    last_order[v] = last_ptr++;
}

int main() {
	int N, M;
	cin >> N >> M;

	Graph G(N);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	seen.assign(N, false); //全頂点を「未訪問」に初期化
	first_order.resize(N);
    last_order.resize(N);

	int first_ptr = 0, last_ptr = 0;
    dfs(G, 0, first_ptr, last_ptr);
}
