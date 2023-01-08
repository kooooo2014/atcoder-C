#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	LL N, MOD, ans = 0;
	cin >> N >> MOD;

	vector<LL> A(N);
	vector<LL> B(0);
	vector<int> Count(N*, 1);
	rep (i, 0, N) {
		cin >> A[i];
		A[i] %= MOD;
		ans += A[i];
	}

	sort(all(A));
	rep (i, 0, A.size()) B.push_back(A[i]);
	rep (i, 0, A.size()) B.push_back(A[i]+MOD);

	rep (i, 1, B.size()) {
		if (B[i-1] <= B[i]+1) Count[i] ++;

	}
	cout << ans << endl;
	return 0;
}
