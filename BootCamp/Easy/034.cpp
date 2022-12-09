#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int A, B, C, X;
	cin >> A >> B >> C >> X;
	int ans = 0, tmp = 0;

	for (int i = min(X / 500, A); i >= 0; i--) {
		for (int j = min((X - i * 500) / 100, B); j >= 0; j--) {
			tmp = X - (i * 500) - (j * 100);
			if (tmp % 50 == 0 && tmp / 50 <= C)	ans ++;
		}
	}
	cout << ans << endl;
	return 0;
}
