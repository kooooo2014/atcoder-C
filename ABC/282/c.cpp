#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, count = 0;
	string S;
	cin >> N >> S;

	rep (i, 0, N) {
		if (S[i] == '"') count ++;
		else if (S[i] == ',' && count % 2 == 0) S[i] = '.';
		printf("%c", S[i]);
	}
	printf("\n");
	return 0;
}
