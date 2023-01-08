#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int ans = 0;
	string S;
	bool flag = 0;
	cin >> S;

	rep (i, 0, S.size()) {
		if (S[i] != '0') {
			ans ++;
			flag = false;
		} else if (flag == false) {
			flag = true;
			ans ++;
		} else {
			flag = false;
		}
	}

	cout << ans << endl;
	return 0;
}
