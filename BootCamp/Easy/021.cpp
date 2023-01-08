#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

bool is_prime(LL n) {
	for (LL i = 2; i * i <= n; i ++) {
		if (n % i == 0)	return false;
	}
	return true;
}

int main() {
	int N;
	cin >> N;
	if (N <= 2) cout << 2 << endl;
	else {
		while (is_prime(N) == false) {
			N += 1;
		}
		cout << N << endl;
	}
	return 0;
}
