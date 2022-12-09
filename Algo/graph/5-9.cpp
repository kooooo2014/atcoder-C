#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

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

    rep (v, 0, N) {
        if(deg[v] == 0) que.push(v);
    }

    while(!que.empty()) {
        int v = que.front();
        que.pop();
        order.push_back(v);

        for(auto v2 : G[v]) {
            // v2 の出次数を 1 減らして、もし出次数が 0 になったらキューに v2 を入れる
            deg[v2]--;
            if(deg[v2] == 0) que.push(v2);
        }
    }

    // 全ての頂点が order に含まれているかによって、答えを変える
    if (order.size() != N) cout << "Yes" << endl;
    else cout << "No" << endl;
	return 0;
}
