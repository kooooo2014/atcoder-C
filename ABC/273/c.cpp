#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;


int main() {
	int N, a;
	cin >> N;
	map<int, int> map;
	for (int i = 0; i < N; i++) {
		cin >> a;
		map[a] ++;
	}

	auto it = map.rbegin();
	for(; it != map.rend(); it++) printf("%d\n", it->second);
	for(int i = 0; i < N - (int)map.size(); i ++) printf("0\n");

	return 0;
}
