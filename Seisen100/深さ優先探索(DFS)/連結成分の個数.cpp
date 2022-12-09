#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

/*
10 10
s.........
#########.
#.......#.
#..####.#.
##....#.#.
#####.#.#.
g.#.#.#.#.
#.#.#.#.#.
#.#.#.#.#.
#.....#...
*/

int H, W;
vector<vector<int>> field;
//seenを01で代用している

void dfs(int h, int w) {
	field[h][w] = 0;

	for (int dw = -1; dw <= 1; ++dw) {
		for (int dh = -1; dh <= 1; ++dh) {
			int nh = h + dh;
			int nw = w + dw;

			if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
			if (field[nh][nw] == 0) continue;

			dfs(nh, nw);
		}
	}
}

int main() {
	// 入力受け取り
    while (cin >> W >> H) {
        if (H == 0 || W == 0) break;
        field.assign(H, vector<int>(W, 0));
        for (int h = 0; h < H; ++h) {
			for (int w = 0; w < W; ++w) {
				cin >> field[h][w];
			}
		}

        // 探索開始
        int count = 0;
        for (int h = 0; h < H; ++h) {
            for (int w = 0; w < W; ++w) {
                if (field[h][w] == 0) continue; // 残島じゃなかったらスルー
                dfs(h, w);
                ++count;
            }
        }
        cout << count << endl;
    }
}
