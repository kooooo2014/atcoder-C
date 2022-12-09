#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, tmp = 0, alice = 0, bob = 0;
	cin >> N;

	vector<int> card(N);
	for (int i = 0; i < N; i++) {
		cin >> card.at(i);
	}
	sort(card.begin(), card.end(), greater<int>());

	for (int i = 0; i < N; i++) {
		if (i % 2 == 0) alice += card.at(i);
		else bob += card.at(i);
	}

	cout << abs(alice - bob) << endl;
	return 0;
}
