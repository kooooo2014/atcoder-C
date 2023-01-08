#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, D, ans = 0;
	cin >> N >> D;

	vector<vector<int>> data(N, vector<int>(D));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < D; j++) {
			cin >> data.at(i).at(j);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			int num = 0;
			for (int k = 0; k < D; k++) {
				num += pow(abs(data.at(i).at(k) - data.at(j).at(k)), 2);
			}
			for (int l = 1; l * l <= num; l++) {
				if (l * l == num) ans ++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
