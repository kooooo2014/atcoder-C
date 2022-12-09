#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, m = 0, tmp = 0;
	cin >> N;

	if (N == 1) {
		cout << 1 << endl;
		return 0;
	}

	for (int i = 2; pow(i, 2) <= N; i ++) {
		for (int j = 2; pow(i, j) <= N; j ++) {
			tmp = pow(i, j);
			m = max(m, tmp);
		}
	}
	cout << m << endl;
	return 0;
}
