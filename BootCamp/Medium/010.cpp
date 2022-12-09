#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;
map<int, int> memo;

int main() {
	int N, ans = 0, tmp;
	cin >> N;

	rep (i, 0, N) {
		cin >> tmp;
		memo[tmp-1] ++;
		memo[tmp] ++;
		memo[tmp+1] ++;
	}
	for(auto it = memo.rbegin(); it != memo.rend(); it++) ans = max(ans, (int)it->second);
	cout << ans << endl;
	return 0;
}
