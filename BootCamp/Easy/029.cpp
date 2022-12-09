#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	string S;
	cin >> S;
	int ans = 1000, a = 0, b = 0, c = 0, num = 0;

	for (int i = 0; i < S.size() - 2; i++) {
		a = S[i] - 48;
		b = S[i + 1] - 48;
		c = S[i + 2] - 48;
		num = a * 100 + b * 10 + c;
		ans = min(ans, abs(753 - num));
	}
	cout << ans << endl;
	return 0;
}
