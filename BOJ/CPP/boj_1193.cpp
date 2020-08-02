// BOJ 1193
// 분수 찾기
#include <bits/stdc++.h>

using namespace std;

int DP[20000];

void solution() {
	int X, a, b;
	int i = 2;
	cin >> X;
	if (X == 1) {
		cout << "1/1" << "\n";
		return;
	}
	DP[1] = 1;
	while (X >= DP[i - 1]) {
		DP[i++] = DP[i - 1] + i - 1;
	}
	i -= 2;
	int tmp = X - DP[i];
	if (i % 2 == 0) {
		a = 1 + tmp; b = i - tmp;
	}
	else {
		a = i - tmp; b = 1 + tmp;
	}
	cout << a << "/" << b << "\n";
}

int main(int argc, char* argv[]) {
	solution();
}
