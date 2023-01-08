#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, M, ans = 0, tmp = 1;
	cin >> N >> M;

	rep (i, 0, M) tmp *= 2;
	ans = ((N-M) * 100 + M * 1900) * tmp;
	cout << ans << endl;
	return 0;
}
