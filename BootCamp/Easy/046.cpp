#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	int A, B, C;
	LL K;
	cin >> A >> B >> C >> K;

	if (K % 2 == 0) cout << A - B << endl;
	else cout << B - A << endl;
	return 0;
}
