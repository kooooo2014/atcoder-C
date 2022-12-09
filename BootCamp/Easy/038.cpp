#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	vector<int> vec(5);
	int ans = 0, tmp = 0, maxD = 0, diff = 0;

	for (int i = 0; i < 5; i ++) {
		cin >> vec.at(i);
		ans += vec.at(i);
		if (vec.at(i) % 10 != 0) tmp = (vec.at(i) / 10 + 1) * 10 - vec.at(i);
		else tmp =0;
		maxD = max(maxD, tmp);
		diff += tmp;
	}
	cout << ans + diff - maxD << endl;
	return 0;
}
