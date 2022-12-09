#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int H, W;
	cin >> H >> W;

	for (int i = 0; i < H; i++) {
		vector<char> vec(W);
		for (int i = 0; i < W; i++) cin >> vec.at(i);
		for (int i = 0; i < W; i++) cout << vec.at(i);
		printf("\n");
		for (int i = 0; i < W; i++) cout << vec.at(i);
		printf("\n");
	}
	return 0;
}
