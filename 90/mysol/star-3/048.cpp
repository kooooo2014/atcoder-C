#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
const int INF = 1 << 30;

int main() {
	int N, K, A, B;
	LL ans = 0;
	cin >> N >> K;
	vector<LL> vec(2*N);

	rep (i, 0, N) {
		cin >> A >> B;
		vec[2 * i] = A - B;
		vec[2 * i + 1] = B;
	}
	sort(all(vec));
	reverse(all(vec));

	rep (i, 0, K) ans += vec[i];
	printf("%lld\n", ans);
	return 0;
}
