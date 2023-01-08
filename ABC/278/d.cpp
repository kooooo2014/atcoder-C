#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long LL;

int main() {
	int N, Q;
	LL query, base = 0, index, x;
	cin >> N;

	vector<LL> A(N+1);
	queue<int> que;
	rep (i, 1, N+1) {
		cin >> A[i];
		que.push(i);
	}

	cin >> Q;
	rep (i, 0, Q) {
		cin >> query;
		if (query == 1) {
			cin >> x;
			base = x;
			while (!que.empty()) {
				A[que.front()] = 0;
				que.pop();
			}
		} else if (query == 2) {
			cin >> index >> x;
			A[index] += x;
			que.push(index);
		} else {
			cin >> index;
			printf("%lld\n", A[index] + base);
		}
	}
	return 0;
}
