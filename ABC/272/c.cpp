#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N;
	cin >> N;
	int ans_even = 0, ans_odd = 0;
	int count_even = 0, count_odd = 0;

	vector<int> vec(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> vec.at(i);
	}
	sort(vec.begin(), vec.end());

	for (int i = N - 1; i >= 0; i--) {
		if (vec[i] % 2 == 0 && count_even < 2) {
			ans_even += vec[i];
			count_even ++;
		}
		else if(vec[i] % 2 == 1 && count_odd < 2) {
			ans_odd += vec[i];
			count_odd ++;
		}
		if (count_even == 2 && count_odd == 2) break;
	}

	if (count_even == 2 && count_odd == 2) {
		if (ans_even >= ans_odd)
			cout << ans_even << endl;
		else
			cout << ans_odd << endl;
	}
	else if (count_even == 2 && count_odd != 2)
		cout << ans_even << endl;
	else if (count_even != 2 && count_odd == 2)
		cout << ans_odd << endl;
	else if (count_even != 2 && count_odd != 2)
		cout << "-1" << endl;
	return 0;
}
