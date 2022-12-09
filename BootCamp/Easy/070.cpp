#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int X, a = 0, b = 0;
	cin >> X;

	a = X / 100;
	b = (X - a * 100) / 5;
	if ((X - a * 100) % 5 != 0) b ++;
	if (a >= b) cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}
