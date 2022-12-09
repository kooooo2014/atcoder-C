#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N;
	LL ans = 0;
	cin >> N;

	vector<int> vec(3 * N);
	rep (i, 0, 3 * N) cin >> vec.at(i);
	sort(vec.begin(), vec.end());
	for(int i = N; i < 3 * N; i += 2) ans += vec.at(i);

	cout << ans << endl;
	return 0;
}
