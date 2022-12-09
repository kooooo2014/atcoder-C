#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int D, N;
	cin >> D >> N;

	if (N == 100)
		printf("%d\n", 101 * (int)pow(100, D));
	else
		cout << pow(100, D) * N << endl;
	return 0;
}
