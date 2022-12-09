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
	int N, M, X, ans = 0;
	cin >> N >> M >> X;

	Graph G(N);
	vector<int> is_friend(N, 0);
	rep (i, 0, M) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	rep (i, 0, G[X].size()) is_friend[G[X][i]] = 1;
	rep (i, 0, G[X].size()) {
		rep (j, 0, G[i].size()) {
			if(G[i][j] != X && is_friend[G[i][j]] == 0) {
				ans ++;
				is_friend[G[i][j]] = 1;
			}
		}
	}

	printf("%d ", ans);
	return 0;
}
