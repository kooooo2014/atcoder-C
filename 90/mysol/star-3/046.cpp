#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
const int INF = 1 << 30;

int main() {
	int N, tmp;
	LL ans = 0;
	cin >> N;
	vector<int> A(46, 0);
	vector<int> B(46, 0);
	vector<int> C(46, 0);

	rep (i, 0, N) {
		cin >> tmp;
		A[tmp%46] ++;
	}
	rep (i, 0, N) {
		cin >> tmp;
		B[tmp%46] ++;
	}
	rep (i, 0, N) {
		cin >> tmp;
		C[tmp%46] ++;
	}

	rep (i, 0, 46) {
		rep (j, 0, 46) {
			rep(k, 0, 46) {
				// (LL)の位置が重要だった
				if ((i+j+k) % 46 == 0) ans += (LL)A[i] * B[j] * C[k];
			}
		}
	}
	printf("%lld\n", ans);
	return 0;
}
