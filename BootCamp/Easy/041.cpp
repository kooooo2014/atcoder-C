#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, p;
	cin >> N;
	int min = 200001, mincount = 0;

	for (int i = 0; i < N && min != 1; i++) {
		cin >> p;
		if (p < min) {
			min = p;
			mincount ++;
		}
	}
	cout << mincount << endl;
	return 0;
}
