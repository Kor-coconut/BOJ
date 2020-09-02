//BOJ 2178
//미로 탐색
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int arr[101][101];
int dxy[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0 , 1} }; // 상 하 좌 우

void bfs(int N, int M) {
	queue <pair<int, int>> que;
	que.push(make_pair(0, 0)); // 시작하는 위치
	pair <int, int> curr;
	int dx, dy;
	while (!que.empty()) { // 0이 아닐때 까지
		curr = que.front(); // 시작하는 곳 빼내서 다음 탐색 구간 정하기
		que.pop();
		for (int i = 0; i < 4; i++) { // 상하좌우 탐색
			dx = curr.second + dxy[i][0]; // 배열 [y][x] 유념할 것. 첫번째가 y축 두번째가 x축
			dy = curr.first + dxy[i][1];
			if ((dx >= 0 && dx < M) && (dy >= 0 && dy < N) && arr[dy][dx] == 1) {
				que.push(make_pair(dy, dx)); // 다음 이동가능한 위치 queue에 저장.
				arr[dy][dx] = arr[curr.first][curr.second] + 1;
			}
		}
	}

	//	for (int i = 0; i < N; i++) {
	//		for (int j = 0; j < M; j++) {
	//			cout << arr[i][j] << " ";
	//		}
	//		cout << "\n";
	//	}
}

int main(int argc, char* argv[]) {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string temp = "";
		cin >> temp;
		cin.clear();
		for (int j = 0; j < M; j++) {
			arr[i][j] = temp[j] - 48;
		}
	}

	bfs(N, M);

	cout << arr[N - 1][M - 1];

}