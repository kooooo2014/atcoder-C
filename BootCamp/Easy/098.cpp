#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

typedef long long LL;

int main() {
	LL ans = 0;
	vector<int> vec(3);
	rep (i, 0, 3) cin >> vec.at(i);

	if (vec[0] % 2 == 0 || vec[1] % 2 == 0 || vec[2] % 2 == 0) {
		cout << 0 << endl;

	}else{
		sort(vec.begin(), vec.end());
		ans = (LL)vec[0] * (LL)vec[1];
		cout << ans << endl;
	}
	return 0;
}
