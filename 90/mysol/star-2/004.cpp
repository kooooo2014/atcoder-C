#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> data(H, vector<int>(W));
  for (int i = 0; i < H; i ++){
    for (int j = 0; j < W; j ++){
      cin >> data.at(i).at(j);
    }
  }

  vector<int> row(H);
  vector<int> col(W);
  for (int i = 0; i < H; i ++){
    for (int j = 0; j < W; j ++){
      row.at(i) += data.at(i).at(j);
      col.at(j) += data.at(i).at(j);
    }
  }
  vector<vector<int>> ans(H, vector<int>(W));
  for (int i = 0; i < H; i ++){
    for (int j = 0; j < W; j ++){
      ans.at(i).at(j) = row.at(i) + col.at(j) - data.at(i).at(j);
      printf("%d", ans.at(i).at(j));
      if (j < W)
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}
