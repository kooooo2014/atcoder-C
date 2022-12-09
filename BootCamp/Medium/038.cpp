#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
unordered_map<int, int> memo;

int main() {
	int N, M, tmp;
	cin >> N;
	rep (i, 0, N) {
		cin >> tmp;
		memo[tmp] ++;
	}

	cin >> M;
	rep (i, 0, M) {
		cin >> tmp;
		if (memo[tmp] == 0) {
			printf("NO\n");
			return 0;
		} else memo[tmp] --;
	}
	printf("YES\n");
	return 0;
}
