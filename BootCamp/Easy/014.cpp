#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	LL N, K, ans;
	cin >> N >> K;
	if (N % K == 0) ans = 0;
	else {
		while (2 * N > K) {
			N = N % K;
			N = abs(N - K);
		}
		ans = N;
	}
	cout << ans << endl;
	return 0;
}
