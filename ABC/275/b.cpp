#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
const int mod = 998244353;

int main() {
	long long A, B, C, D, E, F;
	cin >> A >> B >> C >> D >> E >> F;
	long long abc, def, ans;

	abc = ((A % mod) * (B % mod)) % mod;
	abc = (abc * (C % mod)) % mod;
	def = ((D % mod) * (E % mod)) % mod;
	def = (def * (F % mod)) % mod;

	ans = (abc + mod - def) % mod;
	cout << ans << endl;
	return 0;
}
