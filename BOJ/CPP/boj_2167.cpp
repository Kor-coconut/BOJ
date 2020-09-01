//BOJ 2167
//2차원 배열의 합
#include <bits/stdc++.h>

using namespace std;

int arr[301][301];

int arr_Sum() {
	int I, J, x, y;
	int sum = 0;
	cin >> I >> J >> x >> y;
	for (int i = I; i <= x; i++) {
		for (int j = J; j <= y; j++) {
			sum += arr[i][j];
		}
	}

	return sum;
}

void arr_Input() {
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> arr[i][j];
		}
	}
}

void solution() {
	arr_Input();
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cout << arr_Sum() << "\n";
	}
}

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	solution();
}