#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int N;
	cin >> N;
	int ans = 0;

	vector<vector<int>> data(N + 1, vector<int>(2));
	for (int i = 1; i <= N; i++) {
		cin >> data.at(i).at(0);
		data.at(i).at(1) = i;
	}
	sort(data.begin(),data.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[0] < beta[0];});

	for (int i = 1; i <= N; i++) {
		printf("%d ", data.at(i).at(1));
	}
	printf("\n");
	return 0;
}
