#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
map<int, int> memo;

int main() {
	int N, X, Y, ans = 0;
	cin >> N >> X >> Y;

	memo[0] = X;
	memo[1] = Y;

	rep (i, 2, N) memo[i] = (memo[i-1] + memo[i-2]) % 100;
	cout << memo[N-1] << endl;
	return 0;
}
