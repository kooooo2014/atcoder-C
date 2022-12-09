#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

bool checkBit(string bit){
	int count = 0;
	for (int i = 0; i < bit.size(); i ++){
		if (bit[i] == '(')
			count ++;
		if (bit[i] == ')')
			count --;
		if (count < 0)
			return false;
	}
	if (count == 0)
		return true;
	return false;
}

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < (1 << N); i++){
	string bit = "";
	for (int j = N - 1; j >= 0; j --){
	  if ((i & (1 << j)) == 0) {
				bit += "(";
			}
			else {
				bit += ")";
			}
	}
	bool check = checkBit(bit);
	if (check == true)
		cout << bit << endl;
  }
  return 0;
}
