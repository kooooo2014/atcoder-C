#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, D, X, a;
	cin >> N >> D >> X;
	int ans = 0;

	for (int i = 0; i < N; i++) {
		cin >> a;
		ans += (D - 1) / a;
	}
	cout << ans + X + N << endl;
	return 0;
}
