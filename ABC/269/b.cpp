#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int X, Y, Z;
	cin >> X >> Y >> Z;

	if (abs(X) < abs(Y)) printf("%d\n", abs(Y));
	else if ((0 < X && X < Y && Z < Y) || (X < Y && Y < 0 && Y < Z)) printf("%d\n", abs(Z) + abs(Y-Z) + abs(X-Y));
	cout << ans << endl;
	return 0;
}
