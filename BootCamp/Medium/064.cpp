#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;
unordered_map<int, int> mp;

int main() {
	int N, ans = 0, tmp;
	cin >> N;

	rep (i, 0, N) {
		cin >> tmp;
		mp[tmp] ++;
	}
	for(auto it = mp.begin(); it != mp.end(); it++) {
		if (it->first <= it->second) ans += it->second - it->first;
		else ans += it->second;
	}
	cout << ans << endl;
	return 0;
}
