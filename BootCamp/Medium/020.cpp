#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;
unordered_map<int, int> memo;

int main() {
	int N, ans = 0, tmp;
	cin >> N;

	rep (i, 0, N) {
		cin >> tmp;
	 memo[tmp] +=1;
	}
	for(auto it = memo.begin(); it != memo.end(); it++) {
		if (it->second % 2 == 1) ans ++;
	}
	cout << ans << endl;
	return 0;
}
