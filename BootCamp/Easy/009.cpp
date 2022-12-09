#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, K, tmp = 0, a = 0, b = 0;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		if (tmp <= K / 2) a += tmp * 2;
		else b += (K - tmp) * 2;
	}
	cout << a + b << endl;
	return 0;
}
