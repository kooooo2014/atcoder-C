#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define revrep(i, n, s) for (int i = (int)(n); i >= (s); i--)
#define all(v) v.begin(), v.end()
typedef long long LL;

int main() {
	stack<char> st;
	vector<int> vec(26, 0);
	string S;
	cin >> S;

	rep (i, 0, S.size()) {
		if (S[i] == '(') st.push('(');
		else if (S[i] != ')') {
			if (vec[S[i] - 'a'] > 0) {
				printf("No\n");
				return 0;
			}
			st.push(S[i]);
			vec[S[i] - 'a'] ++;
		} else {
			while (st.top() != '(') {
				char c = st.top();
				vec[c - 'a'] --;
				st.pop();
			}
			if (st.top() == '(') st.pop();
		}
	}
	cout << "Yes" << endl;
	return 0;
}
