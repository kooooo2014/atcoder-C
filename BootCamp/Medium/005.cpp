#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	LL N, ans = 1;
	cin >> N;

	LL n = N-1;
	while (n > 1) ans += n--;
	if (N == 1) ans = 0;
	cout << ans << endl;
	return 0;
}
