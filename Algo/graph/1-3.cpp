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
	int N, M, maxfriends = 0, index = 0;
	cin >> N >> M;

	Graph G(N);
	rep (i, 0, M) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	rep (i, 0, N) {
		if (maxfriends < (int)G[i].size()) {
			maxfriends = (int)G[i].size();
			index = i;
		}
	}

	sort(all(G[index]));
	rep (i, 0, G[index].size()) printf("%d ", G[index][i]);
	return 0;
}
