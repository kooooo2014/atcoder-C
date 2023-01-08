#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
map<int, int> memo;

int main() {
	int N, t;
	cin >> N;
	vector<int> time(N);

	rep (i, 0, N) cin >> time[i];

	rep (i, 0, N) {
		if (i == 0) memo[i] = 0;
		else if (i == 1) memo[i] = time[i];
		else {
			t = time[i];
			memo[i] = min(memo[i-1] + t, memo[i-2] + (2 * t));
		}
	}
	cout << memo[N-1] << endl;
	return 0;
}
