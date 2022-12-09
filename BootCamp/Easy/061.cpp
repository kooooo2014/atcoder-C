#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	string S, T;
	cin >> S >> T;
	int count = 0;
	T += T;

	for (int i = 0, j = 0; i < (int)S.size() && j < (int)T.size(); j++) {
		if (S[i] == T[j]) {
			count ++;
			i ++;
		}
		else {
			count = 0;
			i = 0;
		}
	}
	if (count == (int)S.size()) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
