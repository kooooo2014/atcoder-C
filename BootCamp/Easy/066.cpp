#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	string R;
	cin >> R;
	int N = 0, W = 0, S = 0, E = 0;

	for (int i = 0; i < (int)R.size(); i++) {
		if (R[i] == 'N') N ++;
		else if (R[i] == 'W') W ++;
		else if (R[i] == 'S') S ++;
		else E ++;
	}
	if ((N >= 1 && W >= 1 && S >= 1 && E >= 1) ||
		(N >= 1 && S >= 1 && W == 0 && E == 0) ||
		(N == 0 && S == 0 && W >= 1 && E >= 1)) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
