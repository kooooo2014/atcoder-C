#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool isvalid(int x, int y, int H, int W) {
    if(0 <= x && x < H && 0 <= y && y < W) return true;
    else return false;
}

int getnum(int x, int y, int H, int W) {
    return (x * W + y);
}

void dfs(int v, vector<vector<int>> &G, vector<bool> &seen) {
    seen[v] = true;
    for(auto v2 : G[v]) {
        if(seen[v2]) continue;
        dfs(v2, G, seen);
    }
}

int main() {
    int H, W, ans = 0;
	cin >> H >> W;

    vector<bool> seen(H * W, false);
    vector<string> grid(H);
    rep(x, 0, H) cin >> grid[x];

    vector<vector<int>> G(H * W);
    rep(x, 0, H) {
        rep(y, 0, W) {
            if(grid[x][y] == '.') continue;
			// マス (x, y) に対応する頂点番号
            int v = getnum(x, y, H, W);

            rep(d, 0, 4) {
                int nx = x + dx[d];
				int ny = y + dy[d];
                // マス (nx, ny) が盤内にあり、黒マスならば、対応する頂点同士を辺で結ぶ
                if(isvalid(nx, ny, H, W)) {
                    if(grid[nx][ny] == '.') continue;
                    int nv = getnum(nx, ny, H, W);

                    G[v].push_back(nv);
                }
            }
        }
    }

    rep(x, 0, H) {
        rep(y, 0, W) {
            if(grid[x][y] == '.') continue;
            int v = getnum(x, y, H, W);

            if(seen[v]) continue;
            dfs(v, G, seen);
            ans++;
        }
    }

    cout << ans << endl;
	return 0;
}
