#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int A, B, K, i;
	cin >> A >> B >> K;

	if (2 * K >= B - A + 1) {
		for (i = A; i <= B; i++) {
			cout << i << endl;
		}
	} else {
		for (i = A; i <= A + K - 1; i++) {
			cout << i << endl;
		}
		for (i = B - K + 1; i <= B; i++) {
			cout << i << endl;
		}
	}
	return 0;
}
