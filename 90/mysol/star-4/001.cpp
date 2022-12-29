#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
LL N, L, K;
vector<int> A;

bool check(LL mid) {
	LL tmp = 0, count = 0;
	rep (i, 1, N+1) {
		if (A[i] - tmp >= mid && L - A[i] >= mid) {
			tmp = A[i];
			count ++;
		}
	}

	if (count >= K) return true;
	else return false;
}

int main() {
	cin >> N >> L >> K;

	A.assign(N+1, 0);
	rep (i, 1, N+1) cin >> A[i];

	LL ng = L+1, ok = -1, mid = 0;

	while (abs(ok - ng) > 1) {
		mid = (ok + ng) / 2;
		if (check(mid)) ok = mid;
		else ng = mid;
	}
	cout << ok << endl;
	return 0;
}
