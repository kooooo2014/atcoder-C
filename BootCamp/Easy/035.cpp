#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
unordered_map<char, int> memo;

int main() {
	string S;
	cin >> S;

	for (int i = 0; i < S.size(); i++) {
		if (memo[S[i]] == 0) memo[S[i]] = 1;
	}

	for (char i = 'a'; i <= 'z'; i++) {
		if (memo[i] == 0) {
			cout << i << endl;
			return 0;
		}
	}
	cout << "None" << endl;
	return 0;
}
