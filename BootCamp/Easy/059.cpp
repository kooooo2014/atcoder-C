#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
int check(char c) {
	if (c >= 'a' && c <= 'z') return 1;
	else if (c >= 'A' && c <= 'Z') return 2;
	else return 0;
}

int main() {
	string S;
	cin >> S;
	bool flag = true;
	int c_count = 0, i, j, tmp = 0;

	if (S[0] != 'A') flag = false;

	for (i = 2; i < S.size() - 1 && flag == true; i++) {
		if (S[i] == 'C' && c_count == 0) {
			c_count ++;
			tmp = i;
		}
		else if (S[i] == 'C' && c_count == 1) flag = false;
	}
	if (c_count == 0) flag = false;

	for (j = 1; j < S.size() && flag == true; j++) {
		if (j == tmp) continue;
		else if (check(S[j]) != 1) flag = false;
	}
	if (flag) cout << "AC" << endl;
	else cout << "WA" << endl;
	return 0;
}
