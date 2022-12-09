#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

vector<vector<int>> children;   // children[i]：頂点 i の子頂点たちを格納する配列
vector<bool> seen;
queue<int> que;
vector<int> Weight;
vector<int> dp1;  // dp1[v]：頂点 v を根とする部分木について、頂点 v を含む安定集合のうち、重みの最大値
vector<int> dp2;  // dp2[v]：頂点 v を根とする部分木について、頂点 v を含まない安定集合のうち、重みの最大値


void dfs(int v) {
    int ans1 = Weight[v];    // dp1[v] (頂点 v を含む安定集合のうち、重みの最大値) の答えとなる変数
    int ans2 = 0;   // dp2[v] (頂点 v を含まない安定集合のうち、重みの最大値) の答えとなる変数

    // 子頂点を先に探索する
    for(auto nv : children[v]) {
        dfs(nv);

        // 頂点 v を選ぶ場合、子頂点を選ぶことはない
        ans1 += dp2[nv];

        // 頂点 v を選ばない場合、子頂点を選んでも選ばなくても良い
        ans2 += max(dp1[nv], dp2[nv]);
    }

    // DP テーブルを埋める
    dp1[v] = ans1;
    dp2[v] = ans2;
    return;
}

int main() {
    int N, a, b, r = 0;
    cin >> N;

    vector<vector<int>> G(N);
    children.resize(N);
    Weight.resize(N);
    seen.assign(N, false);
    dp1.assign(N, 0);
    dp2.assign(N, 0);

    rep (i, 0, N-1) {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    rep (i, 0, N) cin >> Weight[i];
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
    // dp1[r], dp2[r] の最大値が答え
    printf("%d\n", max(dp1[r], dp2[r]));
	return 0;
}
