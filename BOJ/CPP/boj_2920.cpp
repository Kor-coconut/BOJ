//BOJ 2920
//음계
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int arrIn[8], answer = 0;
	for (int i = 0; i < 8; i++)
		cin >> arrIn[i];
	for (int i = 0; i < 8; i++) {
		if (arrIn[i] == i+1) answer++;
	}
	for (int i = 8; i > 0; i--) {
		if (arrIn[8-i] == i) answer--;
	}
	if (answer == 8) cout << "ascending";
	else if (answer == -8) cout << "descending";
	else cout << "mixed";
	
}