#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int f(int n){
	if (n == 0)
		return 1;
	else
		return n * f(n - 1);
}

int main() {
	int N;
	cin >> N;
	int ans = 0;
	ans = f(N);
	cout << ans << endl;
	return 0;
}
