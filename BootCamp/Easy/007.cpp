#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, b;

	vector<vector<int>> data(4, vector<int>(4, 0));
	vector<vector<int>> result(4, vector<int>(4, 0));
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			cin >> data.at(i).at(j);
		}
	}
	cin >> N;
	for (int j = 0; j < N; j++) {
		cin >> b;
		for (int i = 1; i <= 3; i++) {
			for (int j = 1; j <= 3; j++) {
				if (data.at(i).at(j) == b)	result.at(i).at(j) = 1;
			}
		}
	}

	for (int i = 1; i <= 3; i++) {
		int yoko = 0, tate = 0;
		for (int j = 1; j <= 3; j++) {
			if (result.at(i).at(j) == 1)	tate += 1;
			if (result.at(j).at(i) == 1)	yoko += 1;
		}
		if (tate == 3 || yoko == 3) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	if ((result.at(1).at(1) == 1 && result.at(2).at(2) == 1 && result.at(3).at(3) == 1 ) ||
		(result.at(1).at(3) == 1 && result.at(2).at(2) == 1 && result.at(3).at(1) == 1 )) {
		cout << "Yes" << endl;
		return 0;
	}

	cout << "No" << endl;
	return 0;
}
