#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	string S;
	cin >> S;
	int a = 0, z = 0;

	for (int i = 0; i < (int)S.size(); i++) {
		if (S[i] == 'A') {
			a = i;
			break;
		}
	}
	for (int i = (int)S.size() - 1; i >= 0; i--) {
		if (S[i] == 'Z') {
			z = i;
			break;
		}
	}
	printf("%d\n", z-a+1);
	return 0;
}
