#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	double X;
	unsigned long ans;
	int K;
	cin >> X >> K;

	for (int i = 0; i < K; i++) {
		X *= pow(10, -1);
		X = round(X);
	}
	X *= pow(10, K);
	ans = X;
	cout << ans << endl;
	return 0;
}
