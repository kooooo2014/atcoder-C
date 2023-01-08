#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, ansSmall, ansBig;
	cin >> N;

	vector<int> vec(N);
	vector<int> vecSort(N);
	rep (i, 0, N) {
		cin >> vec[i];
		vecSort[i] = vec[i];
	}
	sort(vecSort.begin(), vecSort.end());
	ansBig = vecSort[N / 2];
	ansSmall = vecSort[(N/2)-1];
	rep (i, 0, N) {
		if (vec[i] < ansBig) printf("%d\n", ansBig);
		else printf("%d\n", ansSmall);
	}
	return 0;
}
