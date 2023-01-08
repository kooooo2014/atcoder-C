#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int a, b;
	cin >> a >> b;

	if (a <= 0 && b >= 0) cout << "Zero" << endl;
	else if (a > 0) cout << "Positive" << endl;
	else {
		if ((abs(a) - abs(b) + 1) % 2 == 0) cout << "Positive" << endl;
		else cout << "Negative" << endl;
	}
	return 0;
}
