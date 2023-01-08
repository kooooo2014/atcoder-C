#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

using Graph = vector<vector<int>>;
queue<int> que;

int main() {
    int N, a, b, ans = 0, key = 0, max_dist = 0;
    cin >> N;
    Graph G(N);

    rep (i, 0, N-1) {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> dist(N, -1);
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

    rep (i, 0, N) {
        if (max_dist < dist[i]) {
            max_dist = dist[i];
            key = i;
        }
    }

    dist.assign(N, -1);
    dist[key] = 0;
    que.push(key);

    while (!que.empty()) {
        int v = que.front();
        que.pop();

        for (auto next_v : G[v]) {
            if (dist[next_v] != -1) continue;
            dist[next_v] = dist[v] + 1;
            que.push(next_v);
        }
    }
    ans = *max_element(all(dist));
    printf("%d", ans);
    return 0;
}
