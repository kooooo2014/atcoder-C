#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;

int main() {
	int N;
	LL ans = 0;
	cin >> N;

	vector<LL> vec(N + 1, 0);
	vec.at(0) = 2;
	vec.at(1) = 1;
	for (int i = 2; i <= N; i++) {
		vec.at(i) = vec.at(i - 2) + vec.at(i - 1);
	}
	cout << vec.at(N) << endl;
	return 0;
}
