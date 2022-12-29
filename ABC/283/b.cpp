#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, Q, n, k, x;
	cin >> N;

	vector<int> vec(N);
	rep (i, 0, N) cin >> vec[i];

	cin >> Q;
	rep (i, 0, Q) {
		cin >> n >> k;
		if (n == 1) {
			cin >> x;
			vec[k-1] = x;
		} else {
			printf("%d\n", vec[k-1]);
		}
	}
	return 0;
}
