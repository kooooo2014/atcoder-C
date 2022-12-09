#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N;
	cin >> N;
	int ans = 0;

	vector<string> vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec.at(i);
	}

	for (int i = 0; i < N - 1; i++) {
		if (vec.at(i).at(vec.at(i).size() - 1) != vec.at(i + 1).at(0)) {
			cout << "No" << endl;
			return 0;
		}
		for (int j = i + 1; j < N; j++) {
			if (vec.at(i) == vec.at(j)) {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}
