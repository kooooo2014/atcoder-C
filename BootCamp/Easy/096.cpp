#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, ans = 0, even = 0;
	cin >> N;

	vector<int> vec(N);
	for (int i = 0; i < N; i++) cin >> vec.at(i);
	for (int i = 0; i < N; i++) {
		if(vec.at(i) % 2 == 1) ans += 2 * pow(2, even) * pow(3, N-i-1);
		else {
			ans += pow(2, even) * pow(3, N-1-i);
			even ++;
		}
	}
	cout << ans << endl;
	return 0;
}
