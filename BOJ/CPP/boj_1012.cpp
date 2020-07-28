// BOJ 1012
// 유기농 배추
#include <iostream>
#include <queue>
#include <cstring>
#include <string>

using namespace std;

int dxy[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
int arr[51][51];
int M, N, K, answer;

void bfs(int x, int y) {
	queue<pair <int, int>> que;
	que.push(make_pair(x, y));
	int dx, dy;
	while (!que.empty()) {
		for (int i = 0; i < 4; i++) {
			dx = que.front().second + dxy[i][0];
			dy = que.front().first + dxy[i][1];
			if (dx >= 0 && dx < 51 && dy >= 0 && dy < 51 && arr[dy][dx] == 1) {
				que.push(make_pair(dy, dx));
				arr[dy][dx] = arr[que.front().first][que.front().second] + 1;
			}
		}
		que.pop();
	}
}

void solution() {
	answer = 0;
	memset(arr, 0, sizeof(arr));
	cin >> M >> N >> K;
	for (int i = 0; i < K; i++) {
		int x, y;
		cin >> y >> x; // 배열 행렬과
		arr[x][y] = 1; // x축 y축 헷깔리지 말기!!!
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (arr[i][j] == 1) {
				answer++;
				bfs(i, j);
			}
		}
	}
	
	cout << answer << "\n";
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			cout << arr[i][j] <<" ";
//		}
//		cout << "\n";
//	}

}

int main(int argc, char* argv[]) {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		solution();
	}
}
