#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

typedef long long LL;

int main() {
	LL N, tmp = 0, x = 0, y = 0;
	cin >> N;

	for (LL i = 1; i * i <= N; i++) {
		if (N % i == 0) {
			x = i;
			y = N / x;
		}
	}
	cout << (x - 1) + (y - 1) << endl;
	return 0;
}
