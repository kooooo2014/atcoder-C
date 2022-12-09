#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

string check(vector<int> vec, int N) {
	for (int i = 1; i < N; i++) {
		if (vec.at(i) < vec.at(i - 1)) return "No";
		else if (vec.at(i) > vec.at(i - 1)) vec.at(i) --;
	}
	return "Yes";
}

int main() {
	int N, tmp = 0;
	cin >> N;

	vector<int> vec(N);
	rep (i, 0, N) cin >> vec.at(i);

	cout << check(vec, N) << endl;
	return 0;
}
