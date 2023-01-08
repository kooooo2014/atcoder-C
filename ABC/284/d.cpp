#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
LL N;

LL prime_factorize() {
	for (LL p = 2; p * p <= N; ++p) {
		if (N % p != 0) continue;
		else {
			N /= p;
			return p;
		}
	}
	return 0;
}

int main() {
	LL T, p, q;
	cin >> T;

	rep (i, 0, T) {
		cin >> N;

		p = prime_factorize();
		long double check = (long double)N / (long double)p;
		if (floor(check) == check) {
			q = N / (LL)p;
		} else {
			q = p;
			p = sqrt((long double)N);
		}

		printf("%lld %lld\n", (LL)p, q);
	}
	return 0;
}
