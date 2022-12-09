#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int H, W;
	cin >> H >> W;
	vector<vector<char>> data(H, vector<char>(W));
	vector<int> ans(W, 0);
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> data.at(i).at(j);
			if (data.at(i).at(j) == '#')
				ans.at(j) += 1;
		}
	}

	for (int i = 0; i < W; i++) {
		printf("%d", ans.at(i));
		if (i < W - 1) printf(" ");
		else printf("\n");
	}
	return 0;
}
