#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, A, ans = 0;
	double T, high = 1000, tmp = 0;
	cin >> N >> T >> A;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		tmp = T - tmp * 0.006;
		if(high > abs(A - tmp)) {
			ans = i;
			high = abs(A - tmp);
		}
	}
	cout << ans + 1 << endl;
	return 0;
}
