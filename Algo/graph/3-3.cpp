#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

// マスを表すデータ構造
using Node = pair<int,int>;
// todo リストを表すキュー
queue<Node> que;

// 四方向への移動を表すベクトル
// 0: 下、1: 右、2: 上、3: 左
vector<int> dxs = {1, 0, -1, 0};
vector<int> dys = {0, 1, 0, -1};

int main() {
	int H, W, sx, sy, gx, gy;
    cin >> H >> W >> sx >> sy >> gx >> gy;
    vector<string> S(H);
    for (int i = 0; i < H; ++i) cin >> S[i];

    // 各マス (x, y) が何手目に探索されたか
    // -1 は「まだ探索されていない」ことを表す
    vector<vector<int>> dist(H, vector<int>(W, -1));

    // マス (sx, sy) を始点とする
    dist[sx][sy] = 0;
    que.push(Node(sx, sy));

    while (!que.empty()) {
        auto [x, y] = que.front();
        que.pop();

        // マス (x, y) から 1 手で行けるマスを順に探索
        for (int direction = 0; direction < 4; ++direction) {
            // 隣接マス
            int x2 = x + dxs[direction];
            int y2 = y + dys[direction];

            // 隣接マスが盤面外or黒マスor探索済みである場合はスキップ
            if (x2 < 0 || x2 >= H || y2 < 0 || y2 >= W
                || S[x2][y2] == 'B'
                || dist[x2][y2] != -1) continue;

            // 隣接マスを探索する
            dist[x2][y2] = dist[x][y] + 1;
            que.push(Node(x2, y2));
        }
    }

    // マス (gx, gy) の値を答える
    cout << dist[gx][gy] << endl;
}
