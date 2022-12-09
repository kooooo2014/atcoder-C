#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, M, X, tmp;
	cin >> N >> M >> X;
	int left = 0, right = 0;

	for (int i = 0; i < M; i++) {
		cin >> tmp;
		if (tmp < X) left ++;
		else right ++;
	}
	cout << min(left, right) << endl;
	return 0;
}
