#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)

int main() {
	int N, ans = 300001, e = 0, w = 0, tmp  = 0;
	string S;
	cin >> N >> S;

	vector<int> east(N);
	vector<int> west(N);

	rep (i, 0, N) {
		if (S[i] == 'W') w ++;
		west[i] = w;
	}

	revrep(i, N-1, 0) {
		if (S[i] == 'E') e ++;
		east[i] = e;
	}

	rep (i, 0, N) {
		tmp = west[i] - 1 + east[i];
		ans = min(ans, tmp);
	}
	cout << ans << endl;
	return 0;
}
