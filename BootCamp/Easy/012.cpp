#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, K, ans = 0;
	cin >> K >> N;

	vector<int> A(N, 0);
	vector<int> Adiff(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> A.at(i);
		if (i > 0) Adiff.at(i - 1) = A.at(i) - A.at(i - 1);
	}
	Adiff.at(N - 1) = (K - A.at(N - 1)) + A.at(0);
	sort(Adiff.begin(), Adiff.end());

	for (int i = 0; i < N - 1; i++) {
		ans += Adiff.at(i);
	}
	cout << ans << endl;
	return 0;
}
