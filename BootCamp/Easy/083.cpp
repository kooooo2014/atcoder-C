#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, ans = 0;
	cin >> N;

	vector<vector<int>> data(2, vector<int>(N));

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < N; j++) {
			cin >> data.at(i).at(j);
		}
	}
	for (int i = 1; i < N; i++) {
		data.at(0).at(i) += data.at(0).at(i - 1);
	}
	data.at(1).at(0) += data.at(0).at(0);
	for (int i = 1; i < N; i++) {
		data.at(1).at(i) += max(data.at(0).at(i), data.at(1).at(i - 1));
	}
	cout << data.at(1).at(N - 1) << endl;
	return 0;
}
