#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	LL N, C, K, bus = 1, count = 1;
	int j;
	cin >> N >> C >> K;

	vector<vector<LL>> vec(N, vector<LL>(2));
	rep (i, 0, N) {
		cin >> vec[i][0];
		vec[i][1] = vec[i][0] + K;
	}
	sort(vec.begin(),vec.end(),[](const vector<LL> &alpha,const vector<LL> &beta) {
		return alpha[0] < beta[0];
	});

	LL time = vec[0][1];
	for (int i = 1; i < N; i++) {
		if (vec[i][0] > time || count == 0) {
			bus ++;
			count = 1;
			time = vec[i][1];
		}
		else count ++;

		if (count == C) count = 0;
	}
	printf("%lld\n", bus);
	return 0;
}
/*
6 3 5
1
2
3
4
5
6


6 3 5
1
2
3
6
12
13
*/
