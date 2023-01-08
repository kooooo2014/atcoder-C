#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;
unordered_map<LL, LL> memo;

int main() {
	int N;
	cin >> N;
	int ans = 0;

	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec.at(i);
	}

	vector<vector<int>> data(3, vector<int>(4));
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> data.at(i).at(j);
		}
	}


	cout << ans << endl;
	return 0;
}
