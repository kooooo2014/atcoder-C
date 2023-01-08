#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int Q, t, x;
	cin >> Q;

	deque<int> d;
	rep (i, 0, Q) {
		cin >> t >> x;
		if (t == 1) d.push_front(x);
		else if (t == 2) d.push_back(x);
		else printf("%d\n", d.at(x-1));
	}
	return 0;
}
