#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

LL count_ans(LL n){
	if (n < 2) return 0;
	if (n < 0 || 2 < 0) return 0;
	return n * (n-1) / 2;
}

int main() {
	int N, tmp;
	LL ans = 0;
	cin >> N;

	vector<LL> vec(200, 0);
	rep (i, 0, N) {
		cin >> tmp;
		vec[tmp%200] ++;
	}

	rep (i, 0, 200) ans += count_ans(vec[i]);
	cout << ans << endl;
	return 0;
}
