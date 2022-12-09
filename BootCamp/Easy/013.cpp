#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	unsigned int A, B, C, tmpA, tmpB, tmpC;
	cin >> A >> B >> C;
	int ans = 0;

	while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
		if (A == B && B == C) {
			cout << "-1" << endl;
			return 0;
		}
		ans ++;
		tmpA = A;
		tmpB = B;
		tmpC = C;
		A = (tmpB + tmpC) / 2;
		B = (tmpA + tmpC) / 2;
		C = (tmpA + tmpB) / 2;
	}

	cout << ans << endl;
	return 0;
}
