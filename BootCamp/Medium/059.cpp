#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N, tmp;
	LL ans = 0;
	cin >> N;

	vector<int> vec(N+1);
	rep (i, 1, N+1) {
		cin >> tmp;
		if (tmp == i) vec[i] = 0;
		else vec[i] = 1;
	}
	int i = 1;
	while (i < N+1) {
		if (vec[i] == 0) {
			ans ++;
			i += 2;
		} else i ++;
	}
	cout << ans << endl;
	return 0;
}
