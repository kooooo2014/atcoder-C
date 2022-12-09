#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL N, A, B, ans = 0;
	cin >> N >> A >> B;

	if (A > B || (N == 1 && A != B)) printf("0\n");
	else if (A == B) printf("1\n");
	else {
		ans = B - A + 1;
		ans += (B - A) * (N - 3);
		printf("%lld\n", ans);
	}
	return 0;
}
