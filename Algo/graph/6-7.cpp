#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

vector<vector<int>> children;   // children[i]：頂点 i の子頂点たちを格納する配列
vector<bool> seen;
queue<int> que;
vector<bool> ischosen;  // ischosen[i]：頂点 i を選んだか

void dfs(int v) {
    bool flg = false;   // v の子頂点がすでに選ばれているか

    // 子頂点を先に探索する
    for(auto nv : children[v]) {
        dfs(nv);

        // もし子頂点が選ばれていれば flg を true に変える
        flg |= ischosen[nv];
    }

    // 子頂点が一つも選ばれていなかった場合のみ v を選ぶ
    ischosen[v] = !flg;
    return;
}

int main() {
    int N, a, b, r = 0, ans = 0;
    cin >> N;

    vector<vector<int>> G(N);
    children.resize(N);
    seen.assign(N, false);
    ischosen.resize(N);

    rep (i, 0, N-1) {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen[r] = true;
    que.push(r);

    while (!que.empty()) {
        int v = que.front();
        que.pop();

        for(auto nv: G[v]) {
            if(seen[nv]) continue;
            children[v].push_back(nv);

            seen[nv] = true;
            que.push(nv);
        }
    }

    dfs(r);
    rep (i, 0, N) {
        if(ischosen[i]) ans++;
    }
    cout << ans << endl;
	return 0;
}
