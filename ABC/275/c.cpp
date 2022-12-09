#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
const int r = 9;

int check(vector<vector<char>> data, int a1, int b1){
	int a2, a3, b3, a4, b4, count = 0;
	int b2 = b1 + 1;

	for (a2 = a1; a2 < r; a2 ++) {
		for (b2 = b1 + 1; b2 < r; b2 ++) {
			if (data.at(a2).at(b2) == '#'){
				a3 = a2 + (b2 - b1);
				b3 = b2 - (a2 - a1);
				a4 = a3 - (a2 - a1);
				b4 = b3 - (b2 - b1);
				if ((0 <= a3 && a3 < r) && (0 <= b3 && b3 < r) && (0 <= a4 && a4 < r) && (0 <= b4 && b4 < r)){
					if (data.at(a3).at(b3) == '#' && data.at(a4).at(b4) == '#'){
						count ++;
					}
				}
			}
		}
	}
	return (count);
}

int main() {
	vector<vector<char>> data(r, vector<char>(r));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < r; j++) {
			cin >> data.at(i).at(j);
		}
	}

	int count = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < r; j++) {
			if (data.at(i).at(j) == '#'){
				count += check(data, i, j);
			}
		}
	}
	cout << count << endl;
	return 0;
}

