#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, a, tmp = 1, ans = 0;
	cin >> N;

	vector<int> vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec.at(i);
	}
	for (int i = 0; i < N; i++) {
		if (vec.at(i) == tmp + ans) ans ++;
	}
	if (ans == 0) cout << -1 << endl;
	else cout << N - ans << endl;
	return 0;
}
