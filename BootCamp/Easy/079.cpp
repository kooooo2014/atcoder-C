#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	LL N, A, B, ans = 0;
	cin >> N >> A >> B;

	if((B - A) % 2 == 0) ans = (B - A) / 2;
	else ans = min(N - B, A - 1) + 1 + ((B - 1) - A) / 2;
	cout << ans << endl;
	return 0;
}
