#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N, K, S, ans = 0;
	cin >> N >> K >> S;

	if (S < 1000000000) {
		rep (i, 0, K) printf("%d ", S);
		rep (i, K, N) printf("%d ", S+1);
	} else {
		rep (i, 0, K) printf("%d ", S);
		rep (i, K, N) printf("1 ");
	}
	printf("\n");
	return 0;
}
