#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int f(vector<int> vec) {
	if (vec.size() == 0) return 0;
	else if (vec.size() == 1) return vec[0];
	else {
		int j = *min_element(vec.begin(), vec.end()), i = 0;
		vector<int> vec1(0);
		vector<int> vec2(0);

		while (vec[i] != j) vec1.push_back(vec[i++] - j);
		i ++;
		while (i < vec.size()) vec2.push_back(vec[i++] - j);
		return j + f(vec1) + f(vec2);
	}
}

int main() {
	int N, ans = 0, i;
	cin >> N;

	vector<int> vec(N);
	rep(i, 0, N) cin >> vec[i];
	cout << f(vec) << endl;
	return 0;
}
