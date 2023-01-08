#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
map<string, int> mp;

int main() {
	int N;
	string s;
	cin >> N;

	rep (i, 0, N) {
		cin >> s;
		if (mp.count(s) == 0) {
			printf("%d\n", i+1);
			mp[s] = 1;
		}
	}
	return 0;
}
