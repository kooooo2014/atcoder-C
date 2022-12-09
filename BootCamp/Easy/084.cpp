#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N, tmpA = 0, tmpB = 0;
	LL monster = 0;
	cin >> N;

	vector<int> A(N+1);
	vector<int> B(N);
	rep (i, 0, N+1) cin >> A.at(i);
	rep (i, 0, N) {
		cin >> B.at(i);
		monster += B.at(i);
	}

	for (int i = 0; i < N; i++) {
		tmpA = A.at(i);
		tmpB = B.at(i);
		A.at(i) = max(tmpA - tmpB, 0);
		B.at(i) = max(tmpB - tmpA, 0);
		tmpA = A.at(i+1);
		tmpB = B.at(i);
		A.at(i+1) = max(tmpA - tmpB, 0);
		B.at(i) = max(tmpB - tmpA, 0);
	}
	rep (i, 0, N) monster -= B.at(i);
	cout << monster << endl;
	return 0;
}
