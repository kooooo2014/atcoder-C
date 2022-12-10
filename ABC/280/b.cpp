#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	LL N;
	cin >> N;

	vector<LL> vec(N);
	rep (i, 0, N) cin >> vec[i];

	printf("%lld ", vec[0]);
	rep (i, 1, N) {
		printf("%lld", vec[i]-vec[i-1]);
		if (i != N-1) printf(" ");
	}
	printf("\n");
	return 0;
}
