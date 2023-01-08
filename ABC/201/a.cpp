#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	vector<int> vec(3);
	rep (i, 0, 3) cin >> vec[i];

	do {
        if (vec[2] - vec[1] == vec[1] - vec[0]) {
			printf("Yes\n");
			return 0;
		}
    } while (next_permutation(all(vec)));

	printf("No\n");
	return 0;
}
