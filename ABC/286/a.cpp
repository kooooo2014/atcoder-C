#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, P, Q, R, T;
	cin >> N >> P >> Q >> R >> T;

	vector<int> vec(N);
	rep (i, 0, N) cin >> vec[i];

	rep (i, 0, P-1) printf("%d ", vec[i]);
	rep (i, R-1, T) printf("%d ", vec[i]);
	rep (i, Q, R-1) printf("%d ", vec[i]);
	rep (i, P-1, Q) printf("%d ", vec[i]);
	rep (i, T, N) printf("%d ", vec[i]);

	printf("\n");
	return 0;
}
