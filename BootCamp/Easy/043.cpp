#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	string S;
	cin >> S;
	int a;

	vector<int> vec('z'-'a'+1, 0);
	for (int i = 0; i < S.size(); i++) {
		a = S[i] - 'a';
		vec.at(a) ++;
	}

	for (int i = 0; i < 'z'-'a'+1; i++) {
		if (vec.at(i) % 2 == 1) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout <<"Yes" << endl;
	return 0;
}
