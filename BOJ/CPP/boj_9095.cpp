//BOJ 9096
//1, 2, 3 더하기
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int T, N;
	cin >> T;

	int dp[10] = { 1, 2, 4 };
	for (int i = 3; i < 10; i++) {
		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
	}
	for (int i = 0; i < T; i++) {
		cin >> N;
		cout << dp[N - 1] << "\n";
	}
}