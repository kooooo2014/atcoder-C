#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, M, a;
	cin >> N >> M;

	vector<int> vec(N + 1, 0);
	for (int i = 0; i < 2 * M; i++) {
		cin >> a;
		vec.at(a) ++;
	}

	for (int i = 1; i <= N; i++) {
		cout << vec.at(i) << endl;
	}
	return 0;
}
