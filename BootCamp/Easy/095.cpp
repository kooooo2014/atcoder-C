#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int ans = 0, maxnum = 0, diff1 = 0, diff2 = 0;
	vector<int> vec(3);
	rep (i, 0, 3) cin >> vec.at(i);
	sort(vec.begin(), vec.end());

	diff1 = vec.at(2) - vec.at(0);
	diff2 = vec.at(2) - vec.at(1);

	if (diff1 % 2 != diff2 % 2) diff1 += 3;
	ans = diff2 + (diff1 - diff2) / 2;

	cout << ans << endl;
	return 0;
}
