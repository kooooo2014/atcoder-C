#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;
unordered_map<int, int> memo;

int main() {
	int N, K, ans = 0, count = 0;
	cin >> N >> K;

	vector<int> vec(N);
	vector<int> vecCount(200001, 0);
	rep (i, 0, N) {
		cin >> vec[i];
		if (vecCount[vec[i]] == 0) count ++;
		vecCount[vec[i]] ++;
	}
	sort(vecCount.begin(), vecCount.end());
	rep (i, 1, 200002) {
		if (count <= K) break;
		else if (vecCount[i] > 0) {
			ans += vecCount[i];
			count --;
		}
	}
	cout << ans << endl;
	return 0;
}
