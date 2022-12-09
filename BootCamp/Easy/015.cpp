#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N;
	cin >> N;
	int ans = 0;

	vector<int> d(N);
	for (int i = 0; i < N; i++) {
		cin >> d.at(i);
	}
	sort(d.begin(), d.end());

	ans = d.at(N / 2) - d.at(N / 2 - 1);
	cout << ans << endl;
	return 0;
}
