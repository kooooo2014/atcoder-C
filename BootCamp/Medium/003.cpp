#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL ans = 0;
	string s;
	cin >> s;

	vector<int> A(s.size()+1, 0);
	rep (i, 0, s.size()) {
		if (s[i] == '<') {
			A[i+1] = A[i] + 1;
		}
	}

	for (int i = s.size()-1; i >= 0; i--) {
		if (s[i] == '>') {
			if (A[i] == 0)
				A[i] = A[i+1] + 1;
			else
				A[i] = max(A[i], A[i+1]+1);
		}
	}
	rep (i, 0, A.size()) ans += (LL)A[i];
	cout << ans << endl;
	return 0;
}
