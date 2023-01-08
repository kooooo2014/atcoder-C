#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <stdio.h>
#include <sstream>
#include <math.h>
#include <iomanip>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
using Graph = vector<int>;

int main() {
	int N, X, ans = 0, p;
	cin >> N >> X;

	Graph G(N);
	rep (i, 1, N) cin >> G[i];
	p = X;
	while (p != 0) {
		ans ++;
		p = G[p];
	}

	printf("%d ", ans);
	return 0;
}
