#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int ans = 1;
	string s;
	cin >> s;

	for (int i = 2; i < s.size()/2; i++) {
		int j = 0;
		while (j < i) {
			if (s[i+j] != s[j]) break;
			else if (s[i+j] == s[j] && j == i-1) ans = i;
			j ++;
		}
	}
	printf("%d\n", ans*2);
	return 0;
}
