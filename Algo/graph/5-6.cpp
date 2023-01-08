#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); --i)
#define all(v) v.begin(), v.end()
typedef long long LL;

vector<bool> seen;
vector<int> order; // トポロジカルソート順を格納するための配列

void dfs(vector<vector<int>> &G, int v) {
    seen[v] = true;

    for(auto v2 : G[v]) {
        if(seen[v2]) continue;
        dfs(G, v2);
    }
    order.push_back(v);
}

int main() {
    int N, M, a, b;
	cin >> N >> M;
    vector<vector<int>> G(N);

    rep (i, 0, M) {
        cin >> a >> b;
        G[a].push_back(b);
    }

    // 問題文の指示より、隣接リストの中身をソートしておく
    rep (i, 0, N) sort(all(G[i]));
    seen.assign(N, false);

    rep (v, 0, N) {
        if(seen[v] == false) dfs(G, v);
    }

    reverse(all(order));

    rep (i, 0, N) {
        printf("%d\n", order[i]);
        if(i != N-1) printf(" ");
    }
    printf("\n");
	return 0;
}
