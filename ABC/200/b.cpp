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
	int K;
	cin >> N >> K;

	rep (i, 0, K) {
		if (N % 200 == 0) N /= 200;
		else {
			N *= 1000;
			N += 200;
		}
	}
	cout << N << endl;
	return 0;
}
