#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

vector<vector<int>> children;   // children[i]：頂点 i の子頂点たちを格納する配列
vector<bool> seen;
queue<int> que;
vector<int> parent;  // parent[i]：頂点 i の親頂点番号
vector<bool> ismatched;    // ismatched[i]：頂点 i はマッチング済みか


void dfs(int v) {
    for(auto nv : children[v]) dfs(nv);

    // 頂点 v の親頂点が存在しない (v が根) ならば、何もしない
    if(parent[v] == -1) return;

    // 頂点 v について、v も親頂点もマッチングされていないならば、
    // 頂点 v と親頂点とをマッチングする
    if(!ismatched[v] && !ismatched[parent[v]]) {
        ismatched[v] = ismatched[parent[v]] = true;
    }
}


int main() {
    int N, a, b, r = 0, ans = 0;
    cin >> N;

    vector<vector<int>> G(N);
    children.resize(N);
    parent.assign(N, -1);
    seen.assign(N, false);
    ismatched.assign(N, false);

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
            parent[nv] = v;
            seen[nv] = true;
            que.push(nv);
        }
    }

    dfs(r);

    // マッチングの辺の本数 (= マッチング済みの頂点数 / 2)　が答え
    rep (i, 0, N) {
        if(ismatched[i]) ans++;
    }
    printf("%d\n", ans /= 2);
	return 0;
}
