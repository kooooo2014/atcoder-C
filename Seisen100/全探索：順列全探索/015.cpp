#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, x, y, factorial = 0;
	double ans = 0, tmp = 0;
	cin >> N;

	vector<vector<int>> xy(2, vector<int>(N, 0));
	vector<vector<int>> diff(N, vector<int>(N, 0));
	rep(i, 0, N) {
		cin >> x >> y;
		xy.at(0).at(i) = x;
		xy.at(1).at(i) = y;
	}

	rep(i, 0, N) {
		rep(j, 0, i) {
			diff.at(i).at(j) = pow(xy.at(0).at(j) - xy.at(0).at(i), 2) + pow(xy.at(1).at(j) - xy.at(1).at(i), 2);
			diff.at(j).at(i) = diff.at(i).at(j);
		}
	}
	vector<int> v(N);
	iota(v.begin(), v.end(), 0);
    do {
        for (int i = 1; i < N; i ++) {
			ans += sqrt((double)diff.at(v[i]).at(v[i-1]));
		}
		factorial ++;
    } while (next_permutation(v.begin(), v.end()));
	printf("%f\n", ans / factorial);
	return 0;
}
