#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	string S;
	cin >> S;
	int countBC = 0, countCB = 0, ans;

	for (int i = 0; i < S.size(); i++) {
		if(i % 2 == 0 && S[i] == '1' || i % 2 == 1 && S[i] == '0' ) countBC ++;
		if(i % 2 == 0 && S[i] == '0' || i % 2 == 1 && S[i] == '1' ) countCB ++;
	}
	cout << min(countBC, countCB) << endl;
	return 0;
}
