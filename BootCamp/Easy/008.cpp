#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int a, b, num = 0;
	cin >> a >> b;
	num = a * pow(10, to_string(b).length()) + b;


	for (int i = 2; i * i <= num; i ++){
		if (i * i == num) {
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");
	return 0;
}
