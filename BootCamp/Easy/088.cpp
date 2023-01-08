#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

unordered_map<string, int> memo;

int main() {
	int N, M, ans = 0;
	string s;
	cin >> N;
	rep (i, 0, N) {
		cin >> s;
		memo[s] ++;
	}

	cin >> M;
	rep (i, 0, M) {
		cin >> s;
		memo[s] --;
	}
	for(auto it = memo.begin(); it != memo.end(); it++) {
		ans = max(ans, it->second);
	}
	cout << ans << endl;
	return 0;
}
