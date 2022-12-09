#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, Q, t, a, b;
	cin >> N >> Q;

	set<pair<int, int>> follow;
	rep (i, 0, Q) {
		cin >> t >> a >> b;
		if (t == 1) follow.insert({a, b});
		else if (t == 2) follow.erase({a, b});
		else {
			auto it1 = follow.find({a, b});
			auto it2 = follow.find({b, a});
			if (it1 != follow.end() && it2 != follow.end()) printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}
