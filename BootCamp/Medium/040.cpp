#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N, M;
	LL ans = 0;
	cin >> N >> M;

	vector<int> vec(M);
	rep (i, 0, M) cin >> vec[i];
	sort (vec.begin(), vec.end());

	vector<int> diff(M-1);
	rep (i, 1, M) diff[i-1] = abs(vec[i] - vec[i-1]);
	sort (diff.begin(), diff.end());

	rep (i, 0, M-1-(N-1)) ans += (LL)diff[i];
	cout << ans << endl;
	return 0;
}
