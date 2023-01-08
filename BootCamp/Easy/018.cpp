#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int checkACGT(char c) {
	if (c == 'A' || c == 'C' || c == 'G' || c == 'T') return 1;
	else return 0;
}

int main() {
	string S;
	cin >> S;
	int max = 0, maxtmp = 0;

	for (int i = 0; i < S.size(); i++) {
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
