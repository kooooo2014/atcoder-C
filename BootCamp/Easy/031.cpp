#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
unordered_map<char, int> memo;

int main() {
	string S;
	cin >> S;
	int ans = 0;

	for (int i = 0; i < S.size(); i++) {
		if (memo.count(S[i]) > 0) {
			cout << "no" << endl;
			return 0;
		}
		memo[S[i]] = 1;
	}
	cout << "yes" << endl;
	return 0;
}
