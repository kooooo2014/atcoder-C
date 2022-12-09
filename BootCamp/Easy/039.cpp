#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N;
	cin >> N;
	int max1 = 0, max2 = 0;

	vector<int> vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec.at(i);
		if (vec.at(i) > max1) max1 = vec.at(i);
		else if (vec.at(i) > max2) max2 = vec.at(i);
	}

	for (int i = 0; i < N; i++) {
		if (vec.at(i) == max1) cout << max2 << endl;
		else cout << max1 << endl;
	}
	return 0;
}
