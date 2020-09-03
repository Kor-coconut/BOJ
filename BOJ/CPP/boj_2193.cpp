//BOJ 2193
//ÀÌÄ£¼ö
#include <iostream>

using namespace std;

void solution() {
	int N;
	cin >> N;
	long long DP[91];
	DP[0] = 0;
	DP[1] = 1;
	DP[2] = 1;
	for (int i = 2; i <= N; i++) {
		DP[i] = DP[i - 2] + DP[i - 1];
	}

	cout << DP[N] << "\n";
}

int main(int argc, char* argv[]) {
	solution();
}