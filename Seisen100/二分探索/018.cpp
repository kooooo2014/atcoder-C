#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int binary_search(vector<int> &a, int key) {
	int ng = -1;
	int ok = (int)a.size();

	while (abs(ok - ng) > 1) {
		int mid = (ok + ng) / 2;
		if (a[mid] >= key) ok = mid;
		else ng = mid;
	}
	return ok;
}

int main() {
	int n, q, tmp, ans = 0;
	cin >> n;
	vector<int> S(n);

	rep (i, 0, n) cin >> S[i];
	cin >> q;

	rep (i, 0, q) {
		cin >> tmp;
		if (S[binary_search(S, tmp)] == tmp) ans ++;
	}
	printf("%d\n", ans);
	return 0;
}
