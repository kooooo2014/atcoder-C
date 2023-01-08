#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (LL i = (s); i < (LL)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int binary_search(vector<int> &a, int key) {
	int ng = -1;
	int ok = (int)a.size();

	while (abs(ok - ng) > 1) {
		int mid = (ok + ng) / 2;
		if (a[mid] >= key) ok = mid;
		else ng = mid;
	}
	return ok;
}

int main() {
	int N;
	LL ans = 0;
	cin >> N;

	vector<int> A(N);
	vector<int> B(N);
	vector<int> C(N);
	rep (i, 0, N) cin >> A[i];
	rep (i, 0, N) cin >> B[i];
	rep (i, 0, N) cin >> C[i];
	sort(A.begin(), A.end());
	sort(C.begin(), C.end());

	for (int b = 0; b < N; b ++) {
		auto a = lower_bound(A.begin(), A.end(), B[b]);
		auto c = upper_bound(C.begin(), C.end(), B[b]);
		ans += (a - A.begin()) * (C.end() - c);
	}
	printf("%lld\n", ans);
	return 0;
}

/*
2 3 6 14 53 159
6 9 58 79 84 323
2 50 79 288 383 2643
*/
