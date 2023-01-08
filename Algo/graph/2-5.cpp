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
using Graph = vector<vector<int>>;
vector<vector<int>> children;
vector<int> v_size;

// 頂点 v を根とする部分木を探索
// p := 頂点 v の親
// siz[v] := 頂点 v を根とする部分木のサイズ
// children[v] := 頂点 v の子頂点のリスト
void rec(int v, int p) {
    for (auto ch : children[v]) rec(ch, v);

    // 帰りがけ時に答えを合算する
    v_size[v] = 1;
    for (auto ch : children[v]) v_size[v] += v_size[ch];
}

int main() {
    int N, p;
    cin >> N;

    children.resize(N);
    rep(v, 1, N) {
        cin >> p;
        children[p].push_back(v);
    }

    // 根頂点 0 の親は便宜的に -1 とする
    v_size.assign(N, 0);
    rec(0, -1);
    for (auto s : v_size) cout << s - 1 << endl;
}
