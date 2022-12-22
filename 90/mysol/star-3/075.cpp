#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
const int INF = 1 << 30;
const LL MOD = 1000000007;
vector<pair<LL, LL> > res;

void prime_factorize(LL N) {
    for (LL p = 2; p * p <= N; ++p) {
        if (N % p != 0) continue;

        int e = 0;
        while (N % p == 0) {
            ++e;
            N /= p;
        }
        res.emplace_back(p, e);
    }
    if (N != 1) res.emplace_back(N, 1);
}

int main() {
	LL N, ans = 0, count = 1, tmp = 2;
	cin >> N;
	prime_factorize(N);

	for (auto [p, e] : res) ans += e;
	while (ans > tmp) {
		count ++;
		tmp *= 2;
	}

	if (ans == 1) count = 0;
	printf("%lld\n", count);
	return 0;
}
