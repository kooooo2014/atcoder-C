#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, minans = 0, maxans = 0, free = 0, tmp, color = 0;
	cin >> N;
	vector<int> vec(8, 0);

	rep (i, 0, N) {
		cin >> tmp;
		if (tmp >= 3200) free ++;
		else vec[tmp / 400] ++;
		if(vec[tmp / 400] == 1) color ++;
	}
	minans = color;
	if (color == 0 && free >= 1) minans = 1;
	maxans = color + free;
	printf("%d %d\n", minans, maxans);
	return 0;
}
