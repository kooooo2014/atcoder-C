#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N;
	cin >> N;

	if (N == 0)
		printf("00\n");
	else if (N < 16)
		printf("0%X\n", N);
	else
		printf("%X\n", N);
	return 0;
}
