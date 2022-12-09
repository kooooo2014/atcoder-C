#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, K, ans = 1;
	cin >> N >> K;

	vector<int> vec(N);
	rep (i, 0, N) cin >> vec[i];
	if (N != K) {
		ans += (N - K) / (K - 1);
		if ((N - K) % (K - 1) != 0) ans ++;
	}
	cout << ans << endl;
	return 0;
}
