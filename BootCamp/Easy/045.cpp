#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int A, B, a, b, c , d, e;
	cin >> A >> B;
	int num = A, count = 0;

	for (int i = 0; i <= B - A; i++) {
		a = num / 10000;
		b = (num - a * 10000) / 1000;
		c = (num - a * 10000 - b * 1000) / 100;
		d = (num - a * 10000 - b * 1000 - c * 100) / 10;
		e = (num - a * 10000 - b * 1000 - c * 100 - d * 10);
		if (a == b && b == c && c == d && d == e) count ++;
		else if (a == b && b == d && d == e) count ++;
		else if (a == e && b == d) count ++;
		num ++;
	}
	cout << count << endl;
	return 0;
}
