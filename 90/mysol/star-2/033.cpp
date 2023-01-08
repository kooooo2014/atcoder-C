#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int H, W, ans = 0;
	cin >> H >> W;

	if (H == 1 || W == 1) ans = H * W;
	else ans = ((H + 1) / 2) * ((W + 1) / 2);
	cout << ans << endl;
	return 0;
}
