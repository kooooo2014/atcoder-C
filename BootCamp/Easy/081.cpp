#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, ans = 0, tmp = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		while (0 < tmp) {
			if (tmp % 2 == 0) {
				tmp /= 2;
				ans ++;
			} else {
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
