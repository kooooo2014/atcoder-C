#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

vector<vector<int>> children;   // children[i]：頂点 i の子頂点たちを格納する配列
vector<bool> seen;
queue<int> que;
vector<bool> iscovered;    // ismatched[i]：頂点 i はマッチング済みか
vector<int> parent;  // parent[i]：頂点 i の親頂点番号

void dfs(int v, int &ans) {
    for(auto nv : children[v]) dfs(nv, ans);

    // もし頂点 v がカバーされていないならば、
    // 頂点 v と親頂点とを結ぶ辺を選び、これら 2 頂点をカバーする
    if(!iscovered[v]) {
        iscovered[v] = iscovered[parent[v]] = true;
        ans++;
    }
}

int main() {
    int N, a, b, r = 0, ans = 0;// ans: 選んだ辺の数を表す変数
    cin >> N;

    vector<vector<int>> G(N);
    children.resize(N);
    parent.assign(N, -1);
    seen.assign(N, false);
    iscovered.assign(N, false);

    rep (i, 0, N-1) {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen[r] = true;
    parent[r] = r;  // 根の親頂点は根であるとすることで、セグメンテーション違反を避けた
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

    dfs(r, ans);
    cout << ans << endl;
	return 0;
}
