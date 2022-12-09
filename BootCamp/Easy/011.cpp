#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, ans = 0, i = 0;
	cin >> N;

	while (pow(2, i) <= N) i ++;

	if (pow(2, i) == N) ans = pow(2, i);
	else if (pow(2, i) > N) ans = pow(2, i - 1);

	cout << ans << endl;
	return 0;
}
