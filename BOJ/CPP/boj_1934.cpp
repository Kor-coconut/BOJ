//BOJ 1934
//최소공배수
#include <bits/stdc++.h>

using namespace std;

void solution() {
	int a, b;
	cin >> a >> b;
	cout << lcm(a, b) << "\n";
}

int main(int argc, char* argv[]) {
	int T;
	cin >> T;
	while (T--) {
		solution();
	}
}