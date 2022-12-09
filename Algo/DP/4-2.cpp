#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
    const int INF = 1 << 30;
	int N, A, B, ans = INF;
    cin >> N >> A >> B;

    vector<int> P(N);
    vector<int> Q(N);
    vector<int> R(N);
	rep (i, 0, N) cin >> P[i];
	rep (i, 0, N) cin >> Q[i];
	rep (i, 0, N) cin >> R[i];

    vector<vector<int>> Shop(3, vector<int>(N, 0));
    rep (i, 0, N) {
        Shop[0][i] = P[i];
        Shop[1][i] = Q[i];
        Shop[2][i] = R[i];
    }

    vector<vector<vector<int>>> Cost(3, vector<vector<int>>(N, vector<int>(4, INF)));
    rep (i, 0, 3) Cost[i][0][1] = Shop[i][0];

    rep (i, 1, N) {
        rep (now, 0, 3) {
            int tmp = INF;
            rep (pre, 0, 3) {
                if (pre == now) continue;
                rep (day, 1, 4) tmp = min(tmp, Cost[pre][i-1][day]);
            }
            Cost[now][i][1] = tmp + Shop[now][i];
            Cost[now][i][2] = Cost[now][i-1][1] + Shop[now][i] - A;
            Cost[now][i][3] = min(Cost[now][i-1][2], Cost[now][i-1][3]) + Shop[now][i] - B;
        }
    }

	rep (i, 0, 3) {
        rep (day, 1, 4) {
            ans = min(ans, Cost[i][N-1][day]);
        }
    }
    printf("%d\n", ans);
	return 0;
}
