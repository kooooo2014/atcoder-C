#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N, K;
	cin >> N >> K;

	vector<int> vec(N);
	rep (i, 0, N) {
		cin >> vec[i];
		if (i >= K) printf("%d ", vec[i]);
	}
	if (N <= K) {
		rep (i, 0, N) printf("0 ");
	} else {
		rep (i, 0, K) printf("0 ");
	}
	printf("\n");
	return 0;
}
