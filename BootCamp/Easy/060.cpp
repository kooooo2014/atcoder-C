#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, M, p, x;
	cin >> N;
	int ans = 0;

	vector<int> T(N);
	for (int i = 0; i < N; i++) {
		cin >> T.at(i);
		ans += T.at(i);
	}
	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> p >> x;
		cout << ans - T.at(p - 1) + x << endl;
	}
	return 0;
}
