#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, a;
	cin >> N;
	int ans = 0;

	vector<int> divA(N);
	for (int i = 0; i < N; i++) {
		cin >> a;
		int count = 0;
		while (a % 2 == 0 && a > 0) {
			a /= 2;
			count ++;
		}
		divA.at(i) = count;
	}
	ans = *min_element(divA.begin(), divA.end());
	cout << ans << endl;
	return 0;
}
