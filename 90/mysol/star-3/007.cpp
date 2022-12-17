#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int binary_search(vector<int> &a, int key) {
  int ng = -1;
  int ok = (int)a.size();

  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;
    if (a[mid] >= key) ok = mid;
    else ng = mid;
  }
  return ok;
}

int main() {
	int N, Q, ans = 0, B;
	cin >> N;

	vector<int> A(N);
	rep (i, 0, N) cin >> A[i];
  sort(all(A));

  cin >> Q;
	rep (i, 0, Q) {
    cin >> B;
    ans = 0;
    if (B <= A[0]) ans = abs(A[0] - B);
    else {
      int tmp = binary_search(A, B);
      ans = min(abs(A[tmp] - B), abs(A[tmp-1] - B));
    }
    printf("%d\n", ans);
  }
	return 0;
}
