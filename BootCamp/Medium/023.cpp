#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, M, s, c;
	cin >> N >> M;

	vector<int> vec(N+1, -1);
	rep (i, 0, M) {
		cin >> s >> c;
		if (vec[s] == -1 || vec[s] == c) vec[s] = c;
		else {
			printf("-1\n");
			return 0;
		}
	}
	if (N > 1 && vec[1] == 0) {
		printf("-1\n");
		return 0;
	}
	rep (i, 1, N+1) {
		if (vec[i] == -1 && i == 1 && N != 1) printf("1");
		else if (vec[i] == -1) printf("0");
		else printf("%d", vec[i]);
	}
	printf("\n");
	return 0;
}
