#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;
double P;

auto f(double x) {
	return x + (P / pow(2, x / 1.5));
}

int main() {
	double low = 0, high = 1e9;
	int count = 500;
	cin >> P;

	while (count --) {
		double c1 = (low * 2 + high) / 3;
		double c2 = (low + high * 2) / 3;

		if (f(c1) > f(c2)) low = c1;
		else high = c2;
	}
	printf("%.10f\n", f(low));
	return 0;
}
