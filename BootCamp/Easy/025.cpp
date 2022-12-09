#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N;
	cin >> N;
	int ans_p = 0, ans_q = 0, idx = 0;

	int array[8];
	vector<int> P(N);
	vector<int> Q(N);
	for (int i = 0; i < N; i++) {
		cin >> P.at(i);
		array[i] = i + 1;
	}
	for (int i = 0; i < N; i++) cin >> Q.at(i);

	do {
		bool ok = true;
		for (int i = 0; i < N; i ++) {
			if (array[i] != P.at(i)) ok = false;
		}
		if (ok) ans_p = idx;

		ok = true;
		for (int i = 0; i < N; i ++) {
			if (array[i] != Q.at(i)) ok = false;
		}
		if (ok) ans_q = idx;
		idx ++;

	}while(next_permutation(array,array + N));

	printf("%d\n", abs(ans_p - ans_q));
	return 0;
}
