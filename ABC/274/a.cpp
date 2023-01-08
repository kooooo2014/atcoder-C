#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	double A, B, ans;
	cin >> A >> B;
	ans = B / A * pow(10, 3);
	ans = round(ans);
	ans /= pow(10, 3);
	printf("%.3f\n", ans);
	return 0;
}
