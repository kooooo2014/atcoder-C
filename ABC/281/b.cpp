#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	string S;
	cin >> S;

	if ((int)S.size() != 8) {
		printf("No\n");
		return 0;
	}

	rep (i, 0, S.size()) {
		if (i == 0 || i == (int)S.size()-1) {
			if ('A' <= S[i] && S[i] <= 'Z') continue;
		}
		else if (i == 1) {
			if ('1' <= S[i] && S[i] <= '9') continue;
		}
		else {
			if ('0' <= S[i] && S[i] <= '9') continue;
		}
		printf("No\n");
		return 0;
	}
	printf("Yes\n");
	return 0;
}
