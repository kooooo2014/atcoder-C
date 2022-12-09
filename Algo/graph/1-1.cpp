#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <stdio.h>
#include <sstream>
#include <math.h>
#include <iomanip>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	int N, A, B;
	string s;
	cin >> N >> A >> B;

	vector<string> vec(N);
	rep (i, 0, N) cin >> vec[i];
	if (vec[A][B] == 'o' && vec[B][A] == 'o') printf("Yes\n");
	else printf("No\n");
	return 0;
}
