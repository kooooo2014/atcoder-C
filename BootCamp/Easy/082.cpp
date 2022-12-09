#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	LL Q, H, S, D, N, ans = 0, half = 0, one = 0, two = 0;
	cin >> Q >> H >> S >> D >> N;

	half = min(H, 2 * Q);
	one = min(S, half * 2);
	two = min(D, one * 2);
	if (N % 2 == 0) ans = two * (N / 2);
	else ans = two * (N / 2) + one;
	cout << ans << endl;
	return 0;
}
