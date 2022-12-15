#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	LL N, P, Q, sum = 0, ans = 0;
	cin >> N >> P >> Q;

	vector<LL> A(N);
	rep (i, 0, N) cin >> A[i];

	rep (i, 0, N) {
		rep (j, i+1, N) {
			rep (k, j+1, N) {
				rep (l, k+1, N) {
					rep (m, l+1, N) {
						sum = ((A[i] * A[j]) % P) * A[k] % P * A[l] % P * A[m] % P;
						if (sum % P == Q) ans ++;
					}
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
