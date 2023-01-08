#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
map<int, int> mp;

int main() {
	int N, x = 1, y;
	cin >> N;

	vector<int> vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec.at(i);
		mp[vec[i]] ++;
	}

	if (N == 1 && mp[1] == 0) {
		printf("0\n");
		return 0;
	}

	y = N;
	while (y > 0) {
		if (mp[x] >= 1){
			x ++;
			y --;
		} else if (y >= 2) {
			x ++;
			y -= 2;
		} else {
			break;
		}
	}

	cout << x - 1 << endl;
	return 0;
}
