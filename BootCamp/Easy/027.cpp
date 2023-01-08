#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	LL N, A, B;
	cin >> N >> A >> B;
	LL ans = 0, setAB = 0;;

	ans = (N / (A + B)) * A;
	setAB = min(A, N % (A + B));

	cout << ans + setAB << endl;
	return 0;
}
