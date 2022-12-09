#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int H;
  	int max = 0;
  	int ans = 0;

	cin >> H;
	vector<int> vec(H);
	for (int i = 0; i < H; i++) {
		cin >> vec.at(i);
	}
	for (int i = 0; i < H; i++) {
		if (vec.at(i) > max){
			max = vec.at(i);
			ans = i;
		}
	}
  	cout << ans + 1 << endl;
  	return 0;
}
