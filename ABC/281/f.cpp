#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, ans = 0;
	string s;
	cin >> N;

	vector<int> vec(N);
	vector<vector<int>> vec(N, vector<int>(2));
	rep (i, 0, N) {
		rep (j, 0, N) {
			cin >> vec.at(i);
			// cin >> vec.at(i).at(j);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {

		}
	}
	cout << ans << endl;
	return 0;
}
