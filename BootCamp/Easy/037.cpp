#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	LL N, K;
	int Q, A;
	cin >> N >> K >> Q;

	vector<LL> vec(N+1, K);
	for (int i = 0; i < Q; i++) {
		cin >> A;
		vec.at(A) ++;
	}

	for (int i = 1; i <= N; i++) {
		if (vec.at(i) <= Q) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	return 0;
}
