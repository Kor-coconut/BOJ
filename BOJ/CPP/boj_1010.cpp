// BOJ 1010
// 다리 놓기
#include <bits/stdc++.h>

using namespace std;

int DP[30][30];

int solution() {
	int N, M;
	cin  >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = i; j <= M; j++) {
			if (i == 1) DP[i][j] = j;
			else if (i == j) DP[i][j] = 1;
			else DP[i][j] = DP[i][j - 1] + DP[i - 1][j - 1];
		}
	}

	return DP[N][M];
}

int main(int argc, char* argv[]) {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cout << solution() << "\n";
	}
}