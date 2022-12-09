#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int A, B;
	cin >> A >> B;

	for (int i = 13; i < (B + 1) * 10; i++) {
		if (floor(i * 0.08) == A && floor(i * 0.1) == B) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
