//BOJ 5596
//시험 점수
#include <bits/stdc++.h>

using namespace std;

void solution() {
	int a = 0 , b = 0;
	for (int i = 0; i < 4; i++) {
		int temp;
		cin >> temp;
		a += temp;
	}
	for (int i = 0; i < 4; i++) {
		int temp;
		cin >> temp;
		b += temp;
	}
	cout << max(a, b) << "\n";
}

int main(int argc, char* argv[]) {
	solution();
}