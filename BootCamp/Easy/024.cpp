#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int A, B , M, c, x, y, tmp;
	cin >> A >> B >> M;
	int a_min = 100000, b_min = 100000, ans = 0;

	vector<int> vecA(A + 1);
	vector<int> vecB(B + 1);
	for (int i = 1; i <= A; i++) {
		cin >> vecA.at(i);
		if (a_min > vecA.at(i)) a_min = vecA.at(i);
	}
	for (int i = 1; i <= B; i++) {
		cin >> vecB.at(i);
		if (b_min > vecB.at(i)) b_min = vecB.at(i);
	}
	ans = a_min + b_min;
	for (int i = 1; i <= M; i++) {
		cin >> x >> y >> c;
		tmp = vecA.at(x) + vecB.at(y) - c;
		ans = min(ans, tmp);
	}

	cout << ans << endl;
	return 0;
}
