#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	string A, B;
	cin >> A >> B;

	if (A.size() > B.size()) cout << "GREATER" << endl;
	else if (A.size() < B.size()) cout << "LESS" << endl;
	else {
		for (int i = 0; i < A.size(); i++) {
			if (A[i] > B[i]) {
				cout << "GREATER" << endl;
				return 0;
			}
			else if (A[i] < B[i]) {
				cout << "LESS" << endl;
				return 0;
			}
		}
		cout << "EQUAL" << endl;
	}
	return 0;
}
