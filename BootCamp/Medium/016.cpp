#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, ans = 0;
	cin >> N;

	vector<int> vec(N);
	rep (i, 0, N) {
		cin >> vec[i];
		ans += vec[i];
	}
	sort(vec.begin(), vec.end());
	int i = 0;
	while (ans % 10 == 0 && i < N) {
		if (vec[i] % 2 != 0) ans -= vec[i];
		i ++;
	}
	if (ans % 2 == 0) ans = 0;
	cout << ans << endl;
	return 0;
}
