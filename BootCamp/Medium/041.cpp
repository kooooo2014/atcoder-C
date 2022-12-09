#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int count = 0;
	string s;
	cin >> s;

	vector<int> vec(26, 0);
	rep (i, 0, 26) {
		rep (j, 0, s.size()) {
			vec[s[j] - 'a']
		}
		printf("memo[%d]: %d\n", i, memo[s[i]]);
	}
	rep (i, 0, s.size()) {
		if (memo[s[i]] == 0) memo[s[i]] = s.size();
		printf("memo[%d]: %d\n", i, memo[s[i]]);
	}

	// cout << ans << endl;
	return 0;
}
/*
whbrjpjyhsrywlqjxdbrbaomnw
whbjjjjyhsrywljjxdbrbaomn
whjjjjjyhsrywjjjxdbrbaom
wjjjjjjyhsryjjjjxdbrbao
jjjjjjjyhsrjjjjjxdbrba
jjjjjjjyhsjjjjjjxdbrb
jjjjjjjyhjjjjjjjxdbr
jjjjjjjyjjjjjjjjxdb
jjjjjjjjjjjjjjjjxd

whbrjpjyhsrywlqjxdbrbaomnw


*/
