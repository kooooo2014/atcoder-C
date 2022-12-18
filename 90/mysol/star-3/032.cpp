#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
const int INF = 1 << 30;

int main() {
	int N, M, tmp = 0, ans = INF;
	cin >> N;

	vector<vector<int>> vec(N, vector<int>(N));
	vector<int> member(N);
	set<pair<int, int>> relation;

	rep (i, 0, N) {
		rep (j, 0, N) cin >> vec[i][j];
		member[i] = i;
	}

	cin >> M;
	rep (i, 0, M) {
		int x, y;
		cin >> x >> y;
		relation.insert({x-1, y-1});
		relation.insert({y-1, x-1});
	}


	do {
		tmp = 0;
        rep (i, 0, N) {
			if (i != 0){
				auto it1 = relation.find({member[i-1], member[i]});
				if (it1 == relation.end()) tmp += vec[member[i]][i];
				else {
					tmp = INF;
					break;
				}
			} else {
				tmp += vec[member[i]][i];
			}
		}
		ans = min(ans, tmp);
    } while (next_permutation(member.begin(), member.end()));

	if (ans != INF) printf("%d\n", ans);
	else printf("-1\n");
	return 0;
}
