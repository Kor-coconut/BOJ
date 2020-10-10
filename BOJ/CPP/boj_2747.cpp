//BOJ 2747
//피보나치 수
#include <bits/stdc++.h>

using namespace std;

void solution() {
	int N;
	unsigned long long memo[46];
	cin >> N;
	memo[0] = 0;
	memo[1] = 1;
	for (int i = 2; i <= N; i++) {
		memo[i] = memo[i - 1] + memo[i - 2];
	}
	cout << memo[N] << "\n";
}

int main(int argc, char* argv[]) {
	solution();
}