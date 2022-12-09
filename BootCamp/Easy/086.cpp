#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int K;
	string s;
	cin >> s >> K;

	for (int i = 0; i < s.size(); i++) {
		if (K == 1) {
			cout << s[i] << endl;
			return 0;
		}
		if(s[i] == '1') K --;
		else {
			cout << s[i] << endl;
			return 0;
		}
	}

	return 0;
}
