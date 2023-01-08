#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N;
	string s;
	cin >> N;

	vector<pair<int, string>> S(N);
	rep (i, 0, N) {
		cin >> S[i].second;
		S[i].first = i;
	}
	revrep (i, N-1, 0) {
		cout << S[i].second << endl;
	}

	return 0;
}
