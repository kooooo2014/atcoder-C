#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, P;
	string S;
	cin >> N;

	vector<tuple<string, int, int>> m;

	rep (i, 0, N) {
		cin >> S >> P;
		m.push_back({S, -P, i+1});
	}
	sort(m.begin(), m.end());
	rep (i, 0, N) cout << get<2>(m[i]) << endl;

	return 0;
}

/*
khabarovsk	-20     1
moscow		-10     2
kazan   	-50     3
kazan   	-35     4
moscow  	-60     5
khabarovsk	-40     6

sort P
kazan   	35      4
kazan   	50      3
khabarovsk	20      1
khabarovsk	40      6
moscow  	10      2
moscow  	60      5

sort -P
kazan   	-50     3
kazan   	-35     4
khabarovsk	-40     6
khabarovsk	-20     1
moscow  	-60     5
moscow  	-10     2
*/
