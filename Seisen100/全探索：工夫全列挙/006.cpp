#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, ans = 0, string_size = 0, tmp1, tmp2, tmp3;
	string s;
	cin >> N >> s;
	string_size = (int)s.size();

	rep (i, 0, 10) {
		rep (j, 0, 10) {
			rep (k, 0, 10) {
				for (tmp1 = 0; tmp1 < string_size; tmp1++) {
					if (s[tmp1] == i + '0') break;
				}
				for (tmp2 = tmp1 + 1; tmp2 < string_size; tmp2++) {
					if (s[tmp2] == j + '0') break;
				}
				for (tmp3 = tmp2 + 1; tmp3 < string_size; tmp3++) {
					if (s[tmp3] == k + '0') break;
				}
				if (tmp1 != string_size && tmp2 != string_size && tmp3 != string_size) ans ++;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
