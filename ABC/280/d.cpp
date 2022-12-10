#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
LL ans = 0;

void is_prime(LL n) {
	LL tmpN = n;
    for (LL i = 2; i * i <= tmpN; i++) {
        while (n % i == 0) {
			ans = i;
			n /= i;
		}
    }
}

int main() {
	LL K;
	cin >> K;

	is_prime(K);
	if (ans != 0) printf("%lld\n", ans);
	else printf("%lld\n", K);
	return 0;
}
