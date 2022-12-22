#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
const LL MOD = 1000000007;

int main(void){
	LL N, i = 0, ans = 0;
	string S;
	cin >> N >> S;

	vector<LL> vec(0);
	while (i < N) {
		LL a = 0, b = 0;
		while (S[i] == 'o') {
			a ++;
			i ++;
		}
		vec.push_back(a);
		while (S[i] == 'x') {
			b ++;
			i ++;
		}
		vec.push_back(b);
	}
	ans = (N * (N+1)) / 2;

	rep (j, 0, vec.size()) ans -= (vec[j] * (vec[j] + 1)) / 2;
	printf("%lld\n", ans);
	return 0;
}
