#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, M, p, ac = 0, wacount = 0;
	string s;
	cin >> N >> M;

	vector<bool> flag(N, 0);
	vector<int> wa(N, 0);

	rep (i, 0, M) {
		cin >> p >> s;
		if (flag.at(p-1) == 0 && s == "AC") {
			ac ++;
			flag.at(p-1) = 1;
			wacount += wa.at(p-1);
		} else if (flag.at(p-1) == 0 && s == "WA") {
			wa.at(p-1) ++;
		}
	}

	printf("%d %d\n", ac, wacount);
	return 0;
}
