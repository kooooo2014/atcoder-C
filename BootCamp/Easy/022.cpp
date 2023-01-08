#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, x;
	cin >> N >> x;
	int ans = 0;

	vector<int> vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec.at(i);
	}
	sort(vec.begin(), vec.end());

	for (int i = 0; i < N; i++) {
		if (x >= vec.at(i)) {
			x -= vec.at(i);
			ans ++;
		}
		else break;
	}
	if (N == ans && x > 0) ans --;
	cout << ans << endl;
	return 0;
}
