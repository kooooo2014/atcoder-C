#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N;
	cin >> N;

	vector<pair<int, string>> mount(N);

	rep (i, 0, N) {
		cin >> mount[i].second >> mount[i].first;
	}
	sort(mount.begin(), mount.end(), greater{});

	cout << mount[1].second << endl;
	return 0;
}
