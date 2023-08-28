#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, ans = 0;
	string S;
	cin >> N >> S;

	for (int i = 1; i < N; i++) {
		ans = N - i;
		for (int j = 0; j+i < N; j++) {
			if (S[j] == S[j+i]) {
				ans = j;
				break;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
