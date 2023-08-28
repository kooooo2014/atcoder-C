#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int a, b;
	cin >> a >> b;

	if (a * 2 == b || (a * 2) == b - 1) printf("Yes\n");
	else printf("No\n");
	return 0;
}
