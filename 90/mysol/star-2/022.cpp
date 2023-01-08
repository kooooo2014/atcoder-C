#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	LL A, B, C, tmp, ans = 0;
	cin >> A >> B >> C;

	tmp = gcd(A, B);
	tmp = gcd(C, tmp);
	ans += A / tmp - 1;
	ans += B / tmp - 1;
	ans += C / tmp - 1;
	cout << ans << endl;
	return 0;
}
