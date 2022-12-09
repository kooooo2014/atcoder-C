#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, M, K, a, b;
	cin >> N >> M;
	vector<vector<int>> data(N + 1, vector<int>(N + 1, 0));

	for (int i = 0; i < M; i++) {
		cin >> K;
		vector<int> tmp(K + 1, 0);
		for (int j = 0; j < K; j++) {
			cin >> tmp.at(j);
		}
		a = 0;
		while (a < K) {
			b = a + 1;
			while (b < K) {
				data[tmp[a]-1][tmp[b]-1] = 1;
				data[tmp[b]-1][tmp[a]-1] = 1;
				b ++;
			}
			a ++;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (data[i][j] == 0 && i != j) {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}
