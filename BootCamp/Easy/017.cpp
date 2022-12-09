#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N;
	cin >> N;

	vector<double> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v.at(i);
	}
	sort(v.begin(), v.end());

	double ans = v.at(0);
	for (int i = 0; i < N; i++) {
		ans = (ans + v.at(i)) / 2;
	}
	cout << ans << endl;
	return 0;
}
