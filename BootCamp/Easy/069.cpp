#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	string s;
	cin >> s;

	if (s.size() == 1) {
		cout << 1 << endl;
		return 0;
	}

	int cnt = s.size() - 1;
	rep(i, 0, s.size() - 1) {
		if (s[i] == s[i + 1]) {
			i += 2;
			cnt--;
		}
	}
	cout << cnt + 1 << endl;
}
