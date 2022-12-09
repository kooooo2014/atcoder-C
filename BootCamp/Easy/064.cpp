#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	string O, E;
	cin >> O >> E;

	for (int i = 0; i < (int)E.size(); i++) {
		printf("%c%c", O[i], E[i]);
	}
	if (O.size() != E.size()) printf("%c", O[O.size()-1]);
	cout << "\n";
	return 0;
}
