#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL N, tmp;
	int ans = 0;
	cin >> N;
	vector<int> vec(0);

	while (N > 0) {
		tmp = N / 10;
		vec.push_back(N - tmp * 10);
		N = tmp;
	}
	rep(i, 0, vec.size() - 1) {
		ans += 9;
		if (vec[i] != 9) vec[i + 1] --;
	}
	ans += vec[vec.size()-1];
	cout << ans << endl;
	return 0;
}
