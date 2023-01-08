#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
const int INF = 1 << 30;
const LL MOD = 1000000007;

LL binary_search(vector<LL> &a, LL key) {
	LL ng = -1;
	LL ok = (LL)a.size();

	while (abs(ok - ng) > 1) {
		LL mid = (ok + ng) / 2;
		if (a[mid] >= key) ok = mid;
		else ng = mid;
	}
	return ok;
}

int main() {
	int N;
	LL sum = 0;
	cin >> N;

	vector<int> A(N);
	rep (i, 0, N) {
		cin >> A[i];
		sum += A[i];
	}

	if (sum % 10 == 0) {
		sum /= 10;

		vector<LL> vec(2*N+1, 0);
		vector<int> doubleA(0);
		rep (i, 0, N) doubleA.push_back(A[i]);
		rep (i, 0, N) doubleA.push_back(A[i]);

		rep (i, 0, 2*N) vec[i+1] = (LL)doubleA[i] + vec[i];
		rep (i, 0, 2*N) {
			LL goal = vec[i] + sum;
			if (vec[binary_search(vec, goal)] == goal) {
				printf("Yes\n");
				return 0;
			}
		}
	}

	printf("No\n");
	return 0;
}
