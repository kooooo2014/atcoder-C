#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int Q, t, f;
	string s;
	char c;
	bool reverse_flag = false;
	cin >> s >> Q;

	deque<char> d;
	rep (i, 0, s.size()) d.push_back(s[i]);
	rep (i, 0, Q) {
		cin >> t;
		if (t == 1) reverse_flag = !reverse_flag;
		else {
			cin >> f >> c;
			if (reverse_flag == false) {
				if (f == 1) d.push_front(c);
				else d.push_back(c);
			} else {
				if (f == 1) d.push_back(c);
				else d.push_front(c);
			}
		}
	}
	if (reverse_flag) {
		reverse(d.begin(), d.end());
	}
	for(auto it = d.begin(); it != d.end(); it++) printf("%c", *it);
	printf("\n");
	return 0;
}
