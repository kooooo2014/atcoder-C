#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, M, L, R, minL, maxR;
	cin >> N >> M >> minL >> maxR;
	int ans = 0;

	for (int i = 1; i < M; i++) {
		cin >> L >> R;
		minL = max(L, minL);
		maxR = min(R, maxR);
	}

	if (minL <= maxR) cout << maxR - minL + 1 << endl;
	else cout << 0 << endl;
	return 0;
}
