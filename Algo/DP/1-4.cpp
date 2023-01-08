#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
map<int, int> memo;

int main() {
	int N, tmp;
	cin >> N;

	rep (i, 0, N+1) {
		if (i == 0) memo[i] = 1;
		else if (i == 1) memo[i] = 1;
		else if (i == 2) memo[i] = 2;
		else memo[i] = memo[i-1] + memo[i-2] + memo[i-3];
	}
	cout << memo[N] << endl;
	return 0;
}
