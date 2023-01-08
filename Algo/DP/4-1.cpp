#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, A, ans = 1 << 30;
    cin >> N >> A;

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

    vector<vector<int>> Cost(3, vector<int>(N, 0));
    rep (i, 0, 3) Cost[i][0] = Shop[i][0];

    rep (i, 1, N) {
        rep (now, 0, 3) {
            int tmp = 1 << 30;
            rep (pre, 0, 3) {
                if (now == pre) tmp = min(tmp, Cost[pre][i-1] + Shop[now][i] - A);
                else tmp = min(tmp, Cost[pre][i-1] + Shop[now][i]);
            }
            Cost[now][i] = tmp;
        }
    }

	rep (i, 0, 3) ans = min(ans, Cost[i][N-1]);
    printf("%d\n", ans);
	return 0;
}
