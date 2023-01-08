#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int A, B, C, X, Y, ans = 0, Max = 0, Min = 0, tmp = 0;
	cin >> A >> B >> C >> X >> Y;

	if (X > Y) { Max = X; Min = Y; tmp = A;}
	else { Max = Y; Min = X; tmp = B;}

	if (A + B < 2 * C) ans = A * X + B * Y;
	else ans = 2 * C * Min + (Max - Min) * tmp;

	cout << min(ans, C * Max * 2) << endl;
	return 0;
}
