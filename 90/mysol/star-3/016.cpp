#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	LL N, A, B, C, ans = 1000000007, k = 0, tmp = 0;
	cin >> N >> A >> B >> C;

	for (LL i = 0; i <= 9999; i++) {
		for (LL j = 0; i + j <= 9999; j++) {
			tmp = A * i + B * j;
			if (N >= tmp && (N - tmp) % C == 0) {
				k = i + j + (N - tmp) / C;
				ans = min(ans, k);
			}
		}
	}
	printf("%lld\n", ans);
	return 0;
}
