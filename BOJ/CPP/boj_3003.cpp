//백준 3003
//킹, 퀸, 룩, 비숍, 나이트, 폰
#include <bits/stdc++.h>

using namespace std;

void solution() {
	int chess[6] = { 1, 1, 2, 2, 2, 8 };
	int find_chess[6] = { 0, };

	for (int i = 0; i < 6; i++) {
		cin >> find_chess[i];
	}
	for (int i = 0; i < 6; i++) {
		cout << chess[i] - find_chess[i] << " ";
	}
}

int main(int argc, char argv[]) {
	solution();
}
