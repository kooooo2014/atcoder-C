#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

LL eight_to_ten(string N) {
	LL res = 0;

	rep (i, 0, N.size()) res = res * 8 + (int)(N[i] - '0');
	return res;
}

string ten_to_nine(LL N) {
	string res;

	if (N == 0) return "0";
	while (N > 0) {
		if (N % 9 == 8) res = '5' + res;
		else res = char(N % 9 + '0') + res;
		N /= 9;
	}

	return res;
}

int main() {
	string N;
	int K;
	cin >> N >> K;

	rep (i, 0, K) N = ten_to_nine(eight_to_ten(N));

	cout << N << endl;
	return 0;
}
