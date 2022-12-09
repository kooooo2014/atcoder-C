#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

// グラフを表すデータ構造
using Graph = vector<vector<int>>;

int main() {
	// 入力
	int N, M;
	cin >> N >> M;

    // グラフを宣言
	Graph G(N);

    // 各頂点の出次数を管理する配列
    vector<int> deg(N, 0);

    // グラフの辺を受け取り、出次数を更新していく
	for (int i = 0; i < M; ++i) {
		int A, B;
		cin >> A >> B;

		// 頂点 A から頂点 B への辺を張る
		G[A].push_back(B);

        // 頂点 B の出次数を増やす
        ++deg[B];
    }

    // キュー
    queue<int> que;

    // 出次数が 0 であるようなソースをキューに入れる
    int num = 0;  // 除去された頂点の個数
    for (int v = 0; v < N; ++v) {
        if (deg[v] == 0) {
            que.push(v);
            ++num;
        }
    }

    // キューが空になるまで探索する
    while (!que.empty()) {
        // キューから頂点を取り出す
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
