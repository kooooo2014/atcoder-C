#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int count_divisor(int n) {
	int count = 0;
	for (int i = 1; i * i <= n; i ++) {
		if (n % i == 0) count += 2;
		if (i * i == n) count --;
	}
	return count;
}

int main() {
	int N, ans = 0;
	cin >> N;

	for (int i = 1; i <= N; i += 2) {
		if (count_divisor(i) == 8) ans ++;
	}
	printf("%d\n", ans);
	return 0;
}
