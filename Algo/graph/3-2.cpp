#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <stdio.h>
#include <sstream>
#include <math.h>
#include <iomanip>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
using Graph = vector<vector<int>>;
vector<int> dist;
queue<int> que;

int main() {
    int N, M, a, b, ans = 0;
    cin >> N >> M;
    Graph G(N);

    rep (i, 0, M) {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    dist.assign(N, -1);
    dist[0] = 0;
    que.push(0);

    while (!que.empty()) {
        int v = que.front();
        que.pop();

        for (auto next_v : G[v]) {
            if (dist[next_v] != -1) continue;
            dist[next_v] = dist[v] + 1;
            que.push(next_v);
        }
    }

    rep (i, 0, N) ans = max(ans, dist[i]);
    printf("%d", ans);
    return 0;
}
