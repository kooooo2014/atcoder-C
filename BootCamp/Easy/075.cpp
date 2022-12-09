#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, K, ans = 1000000001, tmp = 0;
	cin >> N >> K;

	vector<int> vec(N);
	rep (i, 0, N) cin >> vec.at(i);
	sort(vec.begin(), vec.end());
	rep(i, 0, N-K+1) {
		tmp = vec.at(i+K-1) - vec.at(i);
		ans = min(ans, tmp);
	}

	cout << ans << endl;
	return 0;
}
