#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N;
	cin >> N;
	int ans = 0, tmp = 0;

	vector<int> vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec.at(i);
	}

	for (int i = 1; i < N; i++) {
		if (vec.at(i - 1) >= vec.at(i)) tmp ++;
		else {
			ans = max(ans, tmp);
			tmp = 0;
		}
	}
	ans = max(ans, tmp);
	cout << ans << endl;
	return 0;
}
