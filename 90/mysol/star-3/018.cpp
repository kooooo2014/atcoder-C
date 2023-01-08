#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
long double PI = 3.14159265358979;

int main() {
	long double T, L, X, Y, E;
	int Q;
	cin >> T >> L >> X >> Y >> Q;

	rep (i, 1, Q+1) {
		cin >> E;
		long double y = -(L / 2.0) * sin(2.0 * PI * E / T);
		long double z = L / 2.0 - (L / 2.0) * cos(2.0 * PI * E / T);
		long double dy = sqrt((Y - y) * (Y - y) + X * X);
		long double kaku = atan2(z, dy);
		printf("%.12Lf\n", kaku * 180.0L / PI);
	}
	return 0;
}
