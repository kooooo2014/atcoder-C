#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int R, G, B, N, tmp = 0;
	LL ans = 0;
	cin >> R >> G >> B >> N;

	for (int i = N / R; i >= 0; i--) {
		for (int j = N - (i * R); j >= 0; j--) {
			tmp = N - (i * R) - (j * G);
			if (tmp >= 0 && tmp % B == 0) ans ++;
		}
	}
	cout << ans << endl;
	return 0;
}
