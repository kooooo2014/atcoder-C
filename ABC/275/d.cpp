#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long LL;
unordered_map<LL, LL> memo;

LL cal(LL n){
  if (memo.count(n)) return memo[n];
  if (n == 0) return 1;
  return memo[n] = cal(n / 2) + cal(n / 3);
}

int main() {
  LL N;
  cin >> N;
  cout << cal(N) << endl;
  return 0;
}
