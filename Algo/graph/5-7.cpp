#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

using Graph = vector<vector<int>>;
vector<int> deg; // deg[v]：頂点 v の出次数
queue<int> que;
vector<int> order;  // トポロジカルソート順を格納するための配列

int main() {
    int N, M, a, b;
	cin >> N >> M;

	// グラフを表現する隣接リスト (終点のインデックスから、始点の番号を取り出す)
    vector<vector<int>> G(N);
    deg.assign(N, 0);

    rep (i, 0, M) {
        cin >> a >> b;

        // 通常のグラフとは逆で、G[b] に a を入れる
        G[b].push_back(a);

        // 頂点 a の出次数を 1 増やす
        deg[a]++;
    }

    // 問題文の指示より、隣接リストの中身をソートしておく
    rep (i, 0, N) sort(all(G[i]));

	// 頂点 v の出次数が最初の時点で 0 ならば、キューに v を入れる
    rep (v, 0, N) {
        if(deg[v] == 0) que.push(v);
    }


    while(!que.empty()) {
        int v = que.front();
        que.pop();
        order.push_back(v);

		// v2 の出次数を 1 減らして、もし出次数が 0 になったらキューに v2 を入れる
        for(auto v2 : G[v]) {
            deg[v2]--;
            if(deg[v2] == 0) que.push(v2);
        }
    }

    reverse(all(order));

    rep (i, 0, N) {
        printf("%d\n", order[i]);
        if(i != N-1) printf(" ");
    }
    printf("\n");
	return 0;
}
