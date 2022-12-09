#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, ans = 0, n = 3;
	cin >> N;

	vector<int> vec(4);
	vec[0] = N / 1000;
	vec[1] = (N - vec[0] * 1000) / 100;
	vec[2] = (N - vec[0] * 1000 - vec[1] * 100) / 10;
	vec[3] = (N - vec[0] * 1000 - vec[1] * 100 - vec[2] * 10);

	for (int bit = 0; bit < (1 << n); ++bit)
	{
		ans = vec[0];
		int j = 0;
		vector<char> ope(3);
		for (int i = 0; i < n; ++i)
		{
			if (bit & (1 << i)) {
				ans += vec[j + 1];
				ope[j++] = '+';
			} else {
				ans -= vec[j + 1];
				ope[j++] = '-';
			}
		}
		if (ans == 7){
			printf("%d%c%d%c%d%c%d=7\n", vec[0], ope[0], vec[1], ope[1], vec[2], ope[2], vec[3]);
			return 0;
		}
	}
	return 0;
}
