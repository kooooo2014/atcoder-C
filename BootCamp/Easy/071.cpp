#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, L;
	cin >> N >> L;

	vector<string> vec(N);
	rep (i, 0, N) cin >> vec.at(i);
	sort(vec.begin(), vec.end());
	for (int i = 0; i < N; i++) {
		cout << vec.at(i);
	}
	printf("\n");
	return 0;
}
