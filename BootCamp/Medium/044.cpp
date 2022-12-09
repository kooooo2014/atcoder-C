#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N, i;
	cin >> N;

	vector<int> vec(N);
	vector<int> ans(0);

	for (i = 0; i < N; i++) cin >> vec[i];
	for (i = N-1; i >= 0; i-=2) ans.push_back(vec[i]);

	if (N % 2 == 0) i = 0;
	else i = 1;

	for (; i < N; i+=2) ans.push_back(vec[i]);

	for (i = 0; i < N; i++) printf("%d ", ans[i]);
	printf("\n");
	return 0;
}
