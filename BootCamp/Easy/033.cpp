#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int A, B, i;
	string S;
	bool flag = true;
	cin >> A >> B >> S;

	if (A + B + 1 != S.size()) flag = false;

	for (i = 0; i < A && flag == true; i++) {
		if (S[i] < '0' || S[i] > '9') flag = false;
	}

	if (S[i] != '-') flag = false;

	for (i ++; i < A + B + 1 && flag == true; i++) {
		if (S[i] < '0' || S[i] > '9') flag = false;
	}
	if (flag) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
