#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	LL N;
	cin >> N;
	LL i = 0, a = 0, ans = 0;

	while (a <= N) {
		i ++;
		a = pow(2, i);
	}
  	ans = pow(2, i) - 1;
	cout << ans << endl;
	return 0;
}
