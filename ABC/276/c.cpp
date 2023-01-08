#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, v;
	cin >> N;
	v = N-1;

	vector<int> vec(N);
	vector<int> sortVec;

	rep (i, 0, N) cin >> vec[i];

	for (int i = N-2; i >= 0; i --) {
		if (vec[i] > vec[i+1]) {
			rep (j, i+1, N) {
				if (vec[i] < vec[j]) {
					v = j - 1;
					break;
				}
			}
			swap(vec[i], vec[v]);

			rep (j, 0, i+1) printf("%d ", vec[j]);
			rep (j, i+1, N) sortVec.push_back(vec[j]);

			sort(all(sortVec), greater<int>());

			int size = (int)sortVec.size();
			rep (j, 0, size) {
				printf("%d", sortVec[j]);
				if (j != size-1) printf(" ");
				else printf("\n");
			}
			return 0;
		}
	}
	return 0;
}
