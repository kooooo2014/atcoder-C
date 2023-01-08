#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N;
	LL ans = 0, M = 0, A = 0, R = 0, C = 0, H = 0;
	string s;
	cin >> N;

	rep (i, 0, N) {
		cin >> s;
		if (s[0] == 'M') M ++;
		else if (s[0] == 'A') A ++;
		else if (s[0] == 'R') R ++;
		else if (s[0] == 'C') C ++;
		else if (s[0] == 'H') H ++;
	}
	ans += M * A  * (R + C + H);
	ans += (M * R + A * R) * (C + H);
	ans += C * H * (M + A + R);
	cout << ans << endl;
	return 0;
}
