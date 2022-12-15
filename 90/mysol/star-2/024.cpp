#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	LL N, K, ans = 0;
	cin >> N >> K;

	vector<LL> A(N);
	vector<LL> B(N);
	rep (i, 0, N) cin >> A[i];
	rep (i, 0, N) cin >> B[i];
	rep (i, 0, N) ans += abs(A[i] - B[i]);

	if (ans > K) cout << "No" << endl;
	else {
		ans = K - ans;
		if (ans % 2 == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
