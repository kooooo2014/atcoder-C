#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	LL N, M, ans = 0;
	cin >> N >> M;

	if (M >= 2 * N) {
		ans += N;
		ans += (M - 2 * N) / 4;
	} else ans += M / 2;
	cout << ans << endl;
	return 0;
}
