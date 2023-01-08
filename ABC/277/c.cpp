#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, ans = 0, a, b;
	cin >> N;

	map<int, vector<int>> graph;
	queue<int> que;
	map<int, bool> seen;
	rep (i, 0, N) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	que.push(1);
	seen[1] = true;

	while (!que.empty()) {
		int v = que.front();
		que.pop();
		for (int i : graph[v]) {
			if (seen.count(i) == 0) {
				que.push(i);
				seen[i] = true;
			}
		}
	}
	auto it = seen.rbegin();
	cout << it->first << endl;
	return 0;
}
