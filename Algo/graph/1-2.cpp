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
using Graph = vector<vector<int>>;

int main() {
	int N, M;
	cin >> N >> M;

	Graph G(N);
	rep (i, 0, M) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
	}
	rep (i, 0, N) {
		sort(all(G[i]));
		rep (j, 0, G[i].size()) {
			printf("%d", G[i][j]);
			if (j != (int)G[i].size()-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}
