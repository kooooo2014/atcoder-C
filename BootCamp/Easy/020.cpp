#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
unordered_map<int, int> memo;

int main() {
	int s, count = 1;
	cin >> s;

	while (memo.count(s) == 0) {
		count ++;
		memo[s] = 1;
		if (s % 2 == 0) s /= 2;
		else s = 3 * s + 1;
	}

	cout << count << endl;
	return 0;
}
