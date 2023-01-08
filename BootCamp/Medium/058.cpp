#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, A, B, C, D;
	cin >> N >> A >> B >> C >> D;

	vector<char> vec(N+1);
	rep (i, 1, N+1) cin >> vec[i];
	rep (i, A, C) {
		if (vec[i] == '#' && vec[i+1] == '#') {
			printf("No\n");
			return 0;
		}
	}
	rep (i, B, D) {
		if (vec[i] == '#' && vec[i+1] == '#') {
			printf("No\n");
			return 0;
		}
	}
	if (C > D) {
		rep (i, B, D+1) {
			if (vec[i-1] == '.' && vec[i] == '.' && vec[i+1] == '.') {
				printf("Yes\n");
				return 0;
			}
		}
		printf("No\n");
	}
	else printf("Yes\n");
	return 0;
}
