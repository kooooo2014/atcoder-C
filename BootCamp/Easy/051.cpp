#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, A, B, a, b, c, d, e;
	cin >> N >> A >> B;
	int num = 1, ans = 0, count = 0;

	for (int i = 0; i <N; i++) {
		a = num / 10000;
		b = (num - a * 10000) / 1000;
		c = (num - a * 10000 - b * 1000) / 100;
		d = (num - a * 10000 - b * 1000 - c * 100) / 10;
		e = (num - a * 10000 - b * 1000 - c * 100 - d * 10);
		ans = a + b + c + d + e;
		if (A <= ans && ans <= B) count += num;
		num ++;
	}
	cout << count << endl;
	return 0;
}
