//BOJ 2675
//문자열 반복
#include <iostream>
#include <string>

using namespace std;

int T, R;
string S;

void answer() {
	string temp;
	int sz = S.length();
	for (int i = 0; i < sz; i++) {
		for (int j = 0; j < R; j++) {
			temp.push_back(S[i]);
		}
	}
	for (int i = 0; i < temp.size(); i++)
		cout << temp[i];
	cout << "\n";
}

int main(int argc, char* argv[]) {
	cin >> T;
	for (int i = 0; i < T; i++) {
		S.clear();
		cin >> R >> S;
		cin.clear();
		answer();
	}
}