#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	LL N, ans = 1, mod = 1000000007;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		ans = (ans * i) % mod;
	}
	cout << ans << endl;
	return 0;
}
