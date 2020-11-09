//BOJ 5554
//심부름 가는 길
#include <bits/stdc++.h>

using namespace std;

void solution() {
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		int temp;
		cin >> temp;
		sum += temp;
	}
	int m, s;
	m = sum / 60;
	s = sum % 60;

	cout << m << "\n" << s << "\n";
}

int main(int argc, char* argv[]) {
	solution();
}