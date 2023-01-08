#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
map<string, int> memo;

int main() {
	int N, maxcount = 0;
	string s;
	cin >> N;
	vector<string> ans(0);

	for (int i = 0; i < N; i++) {
		cin >> s;
		memo[s] ++;
		maxcount = max(memo[s], maxcount);
	}
	for (auto it = memo.rbegin(); it != memo.rend(); it++) {
		if (it->second == maxcount)	ans.push_back(it->first);
	}
	for (int i = ans.size()-1; i >= 0; i--) {
		cout << ans[i] << endl;
	}
	return 0;
}
