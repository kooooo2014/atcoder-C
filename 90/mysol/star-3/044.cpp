#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
const int INF = 1 << 30;

int main() {
	int N, Q, a, T, x, y, tmp = 0;
	cin >> N >> Q;
	deque<int> d;

	rep (i, 0, N) {
		cin >> a;
		d.push_back(a);
	}

	rep (i, 0, Q) {
		cin >> T >> x >> y;
		x --;
		y --;
		if (T == 1) {
			tmp = d.at(x);
			d.at(x) = d.at(y);
			d.at(y) = tmp;
		} else if (T == 2) {
			tmp = d.back();
			d.pop_back();
			d.push_front(tmp);
		} else {
			printf("%d\n", d.at(x));
		}
	}
	return 0;
}
