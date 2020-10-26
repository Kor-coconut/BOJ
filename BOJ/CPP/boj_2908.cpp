//BOJ 2908
//상수
#include <bits/stdc++.h>

using namespace std;

int reverse(int a) {
	int temp = 0;
	for (int i = 0; i < 3; i++) {
		temp *= 10;
		temp += (a % 10);
		a /= 10;
	}
	return temp;
}

void solution() {
	int a, b;
	cin >> a >> b;
	
	a = reverse(a);
	b = reverse(b);
	cout << max(a, b) << "\n";
}

int main(int argc, char* argv[]) {
	solution();
}