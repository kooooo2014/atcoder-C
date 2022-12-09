#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
unordered_map<int, int> parerent;

int main() {
	int N, A;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> A;
		if (A == 1)
			parerent[1] = 0;
		parerent[i * 2] = parerent[A] + 1;
		parerent[i * 2 + 1] = parerent[A] + 1;
	}

	for (int i = 1; i <= (2 * N + 1); i++) {
		if (parerent.count(i))
			cout << parerent[i] << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}
