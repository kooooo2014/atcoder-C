#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N;
	string S;
	cin >> N >> S;

	printf("%c", S[0]);
	rep (i, 1, N) {
		if (S[i-1] == 'n' && S[i] == 'a') printf("y");
		printf("%c", S[i]);
	}

	printf("\n");
	return 0;
}
