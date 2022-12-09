#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, tmp, i = 0;
	cin >> N;
	tmp = N;
	while (tmp > 0) {
		tmp -= i;
		i ++;
	}
	if (N > 0) i --;
	printf("%d\n", i);
	return 0;
}
