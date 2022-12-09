#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int checkACGT(char c) {
	if (c == 'A' || c == 'C' || c == 'G' || c == 'T') return 1;
	else return 0;
}

int main() {
	int max = 0, maxtmp = 0;
	string S;
	cin >> S;

	for (int i = 0; i < (int)S.size(); i++) {
		if (checkACGT(S[i])) maxtmp ++;
		else {
			if (max < maxtmp) max = maxtmp;
			maxtmp = 0;
		}
	}
	if (max < maxtmp) max = maxtmp;
	printf("%d\n", max);
	return 0;
}
