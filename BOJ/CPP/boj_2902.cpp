//BOJ_2902
//KMP는 왜 KMP일까?
#include <bits/stdc++.h>

using namespace std;

void solution() {
	string str;
	string ans;
	cin >> str;
	int T = str.length();
	int i = 0;
	while (T--) {
		if ( 'A' <= str[i] && str[i] <= 'Z') ans.push_back(str[i]);
		i++;
	}
	cout << ans;
}

int main(int argc, char* argv[]) {
	solution();
}