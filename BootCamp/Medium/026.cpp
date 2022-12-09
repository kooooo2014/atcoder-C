#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N, ans = 1, prev, upDownFlag = 0;
	cin >> N;

	vector<int> vec(N);
	rep (i, 0, N) cin >> vec[i];

	prev = vec[0];
	rep (i, 1, N) {
		if (vec[i] < prev) {
			if (upDownFlag == 0) upDownFlag = -1;
			else if (upDownFlag == 1) {
				ans ++;
				upDownFlag = 0;
			}
		}
		else if (vec[i] > prev) {
			if (upDownFlag == 0) upDownFlag = 1;
			else if (upDownFlag == -1) {
				ans ++;
				upDownFlag = 0;
			}
		}
		prev = vec[i];
	}
	cout << ans << endl;
	return 0;
}
