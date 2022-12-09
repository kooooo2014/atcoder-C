#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int a = 0, b = 0, c = 0;
	char now = 'a';
	string A, B, C;
	cin >> A >> B >> C;

	while (1) {
		if (now == 'a') {
			if (a == (int)A.size()) {
				printf("A\n");
				return 0;
			}
			now = A[a];
			a ++;
		}
		else if (now == 'b') {
			if (b == (int)B.size()) {
				printf("B\n");
				return 0;
			}
			now = B[b];
			b ++;
		}
		else {
			if (c == (int)C.size()) {
				printf("C\n");
				return 0;
			}
			now = C[c];
			c ++;
		}
	}
	return 0;
}
