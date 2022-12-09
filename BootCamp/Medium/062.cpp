#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N, ans = 0;
	cin >> N;
	vector<int> vec(N);

	rep (i, 0, N) cin >> vec[i];
	rep (i, 0, N) ans = gcd(ans, vec[i]);
	printf("%d\n", ans);
	return 0;
}
