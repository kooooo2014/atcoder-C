#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, Q, L, A, s, t;
	cin >> N >> Q;

	vector<vector<int>> data(N + 1, vector<int>(1, 0));

	for (int i = 1; i <= N; i++) {
		cin >> L;
		for (int j = 1; j <= L; j++) {
			cin >> A;
			data.at(i).push_back(A);
		}
	}

	for (int i = 1; i <= Q; i++) {
		cin >> s >> t;
		printf("%d\n", data.at(s).at(t));
	}
	return 0;
}
