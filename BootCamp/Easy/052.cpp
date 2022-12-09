#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N;
	cin >> N;
	int ans = 0;

	vector<int> vec(N - 1);
	for (int i = 0; i < N - 1; i++) {
		cin >> vec.at(i);
	}

	for (int i = 1; i < N - 1; i++) {
		ans += min(vec.at(i - 1), vec.at(i));
	}
	cout << ans + vec.at(N - 2) + vec.at(0) << endl;
	return 0;
}
