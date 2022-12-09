#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;
int main() {
	LL N, M, ans = 0;
	cin >> N >> M;

	vector<vector<LL>> data(N, vector<LL>(2));
	rep (i, 0, N) {
		cin >> data.at(i).at(0) >> data.at(i).at(1);
	}
	sort(data.begin(), data.end());
	rep (i, 0, N) {
		if (M > data[i][1]) {
			ans += data[i][0] * data[i][1];
			M -= data[i][1];
		}else{
			ans += data[i][0] * M;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
