#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, ans = 0;
	string s, t;
	cin >> s >> t;

	for (int i = 0; i <= (int)s.size() - (int)t.size(); i++) {
		if (s.substr(i, (int)t.size()) == t) {
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");
	return 0;
}
