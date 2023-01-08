#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N;
	string S;
	cin >> N >> S;
	int maxcount = 0, count = 0;

	for (int i = 0; i < N; i++) {
		if (S[i] == 'I') count ++;
		else count --;
		maxcount = max(maxcount, count);
	}
	cout << maxcount << endl;
	return 0;
}
