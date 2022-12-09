#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N;
	LL A = 0;
	cin >> N;

	vector<vector<int>> vec(N, vector<int>(2));
	rep (i, 0, N) cin >> vec[i][0] >> vec[i][1];
	sort(vec.begin(),vec.end(), [](const vector<int> &alpha,const vector<int> &beta) {
		return alpha[1] < beta[1];
	});
	rep (i, 0, N) {
		A += vec[i][0];
		if (A > vec[i][1]) {
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
}
