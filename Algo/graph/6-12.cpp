#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

const long long MOD = 998244353;

vector<bool> seen;
vector<vector<int>> children;    // children[i]：頂点 i の子頂点たちを格納する配列
queue<int> que;
vector<LL> dp1;  // dp1[v]：頂点 v を根とする部分木について、頂点 v を含む安定集合のうち、重みの最大値
vector<LL> dp2;  // dp2[v]：頂点 v を根とする部分木について、頂点 v を含まない安定集合のうち、重みの最大値

void dfs(int v) {
    long long ans1 = 1;    // dp1[v] (頂点 v を含む安定集合の個数) の答えとなる変数
    long long ans2 = 1;   // dp2[v] (頂点 v を含まない安定集合の個数) の答えとなる変数

    // 子頂点を先に探索する
    for(auto nv : children[v]) {
        dfs(nv);

        // 頂点 v を選ぶ場合、子頂点を選ぶことはない
        ans1 *= dp2[nv];
        ans1 %= MOD;

        // 頂点 v を選ばない場合、子頂点を選んでも選ばなくても良い
        ans2 *= (dp1[nv] + dp2[nv]);
        ans2 %= MOD;
    }

    // DP テーブルを埋める
    dp1[v] = ans1;
    dp2[v] = ans2;
}


int main() {
    int N, a, b, r = 0;
    cin >> N;

    vector<vector<int>> G(N);
    children.resize(N);
    seen.assign(N, false);
    dp1.assign(N, 0);
    dp2.assign(N, 0);

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
    // dp1[r] + dp2[r] が答え
    printf("%lld\n", (dp1[r] + dp2[r]) % MOD);
	return 0;
}
