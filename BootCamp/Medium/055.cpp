#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
unordered_map<int, int> memo;

int main() {
	int N, M, a, b;
	cin >> N >> M;

	vector<int> vec(0);
	rep (i, 0, M) {
		cin >> a >> b;
		if (a == 1) memo[b] = 1;
		if (b == N) vec.push_back(a);
	}
	rep (i, 0, vec.size()) {
		if (memo.count(vec[i]) > 0) {
			printf("POSSIBLE\n");
			return 0;
		}
	}
	printf("IMPOSSIBLE\n");
	return 0;
}
