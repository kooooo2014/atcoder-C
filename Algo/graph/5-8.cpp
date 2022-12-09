#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); --i)
#define all(v) v.begin(), v.end()
typedef long long LL;

vector<bool> seen;
vector<bool> finished; // finished[v]：頂点 v の探索が終了しているか

// サイクルが検出されたときのみ false を返す
bool dfs(vector<vector<int>> &G, int v) {
    bool ret = true;
    seen[v] = true;

    for(auto v2 : G[v]) {
        if(seen[v2]) {
            // v2 の処理が終了していないならば、v2 を含むサイクルが存在するため、false を返す
            if(!finished[v2]) return false;
            continue;
        }
        // そうでなければ、頂点 v2 始点で深さ優先探索を行う
        // 一つでも false を返せば、最終的な返り値は false になる
        ret &= dfs(G, v2);
    }

    finished[v] = true;
    return ret;
}

int main() {
    int N, M, a, b;
    string ans = "No";
	cin >> N >> M;
    vector<vector<int>> G(N);

    rep (i, 0, M) {
        cin >> a >> b;
        G[a].push_back(b);
    }

    seen.assign(N, false);
    finished.assign(N, false);

    rep (v, 0, N) {
        if(seen[v]) continue;

        // 探索の結果サイクルが見つかれば、答えは Yes
        if(!dfs(G, v)) ans = "Yes";
    }
    cout << ans << endl;
	return 0;
}
