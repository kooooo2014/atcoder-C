#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int i = 0, a;
	LL N, ans = 0;
	vector<LL> vec;
	cin >> N;

	while (N > 0) {
		if (N % 2 == 1) vec.push_back((LL)pow(2, i));
		i ++;
		N /= 2;
	}

	a = (int)vec.size();

	for (int bit = 0; bit < (1 << a); ++bit) {
		ans = 0;
		for (i = 0; i < a; ++i) {
			if (bit & (1 << i)) ans += vec[i];
		}
		printf("%lld\n", ans);
	}

	return 0;
}
