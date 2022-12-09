#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

typedef long long LL;

int main() {
	LL N, K, ans = 0;
	cin >> N >> K;

	ans = K * pow(K-1, N-1);
	cout << ans << endl;
	return 0;
}
