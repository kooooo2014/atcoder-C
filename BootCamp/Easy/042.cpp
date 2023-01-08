#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, M, K, A;
	cin >> N >> M;
	int ans = 0;

	vector<int> vec(M + 1, 0);
	for (int i = 0; i < N; i++) {
		cin >> K;
		for (int j = 0; j < K; j++) {
			cin >> A;
			vec.at(A) ++;
		}
	}
	for (int i = 1; i <= M; i ++) {
		if (vec.at(i) == N) ans ++;
	}
	cout << ans << endl;
	return 0;
}
