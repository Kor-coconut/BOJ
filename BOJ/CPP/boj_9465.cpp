//BOJ 9465 
//스티커
#include <bits/stdc++.h>

using namespace std;

int DP[2][100001];
int arr[2][100001];

int solution() {
	int N;
	int answer = 0;
	cin >> N;
	
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> arr[i][j];
		}
	}
	DP[0][0] = DP[1][0] = 0;
	DP[0][1] = arr[0][1]; DP[1][1] = arr[1][1];

	for (int i = 1; i <= N; i++) {
		DP[0][i] = max(DP[1][i - 1], DP[1][i - 2]) + arr[0][i];
		DP[1][i] = max(DP[0][i - 1], DP[0][i - 2]) + arr[1][i];
	}

	answer = max(DP[0][N], DP[1][N]);

	return answer;
}

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cout << solution() << "\n";
	}
}