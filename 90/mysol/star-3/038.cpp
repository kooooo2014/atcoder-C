#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;
const LL MAX = pow(10, 18);

int main() {
	LL A, B;
	cin >> A >> B;

	if (MAX / A < B / gcd(A, B)) printf("Large\n");
	else printf("%lld\n", lcm(A, B));
	return 0;
}

// const LL MAX = pow(10, 18);
// LL gcd(LL a, LL b) {
//     if (b == 0) {
//         return a;
//     } else {
//         return gcd(b, a % b);
//     }
// }
// int main() {
// 	LL A, B;
// 	cin >> A >> B;

// 	LL tmp = B / gcd(A, B);

// 	if (MAX / A < tmp) printf("Large\n");
// 	else printf("%lld\n", lcm(A, B));
// 	return 0;
// }


// const unsigned long long MAX = pow(10, 18);
// int main() {
// 	unsigned long long A, B;
// 	cin >> A >> B;

// 	if (MAX / A < B / gcd(A, B)) printf("Large\n");
// 	else printf("%lld\n", lcm(A, B));
// 	return 0;
// }
