#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

typedef long long LL;

int main() {
	LL N, half = 0, ans = 200000000000, flag = 0, tmp = 0;
	cin >> N;

	vector<LL> vec(N);
	rep (i, 0, N) {
		cin >> vec.at(i);
		if(i != 0) vec.at(i) += vec.at(i-1);
	}

	rep (i, 0, N) {
		ans = min(abs(vec.at(i) - (vec.at(N - 1) - vec.at(i))), ans);
	}
	cout << ans << endl;
	return 0;
}
