#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, tmp;
	cin >> N;
	int ans = 0;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		ans += tmp;
	}
	cout << ans << endl;
	return 0;
}
