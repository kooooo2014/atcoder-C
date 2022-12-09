#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL N, M, L, LN, LM;
	string S, T;
	cin >> N >> M >> S >> T;

	L = lcm(N, M);
	LN = L / N;
	LM = L / M;
	for (LL i = 0; i < (L / (LN * LM)); i++) {
		if (S[LM * i] != T[LN * i]) {
			printf("-1\n");
			return 0;
		}
	}
	printf("%lld\n", L);
	return 0;
}
