//BOJ 7569
//토마토
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int arr[101][101][101]; // N * H;
int dxy[6][3] = { {-1, 0, 0}, {1, 0, 0}, {0, -1, 0}, {0, 1, 0} , {0, 0 , -1}, {0, 0, 1} }; // [5][0] , [4][0] = N에 영향을 받음
queue < pair < pair <int, int>, int> > q;
int N, M, H; // N * H;
int cnt = 0;

int bfs() {
	while (!q.empty()) {
		int xx = q.front().first.second;
		int yy = q.front().second;
		int zz = q.front().first.first;
		q.pop();
		for (int i = 0; i < 6; i++) {
			int dx = xx + dxy[i][0];
			int dy = yy + dxy[i][1];
			int dz = zz + dxy[i][2];
			if (0 <= dx && dx < N && 0 <= dy && dy < M && 0 <= dz && dz < H) { // 논리적 오류가 난 라인  
				if (arr[dz][dx][dy] == 0) {
					arr[dz][dx][dy] = arr[zz][xx][yy] + 1; // 근처에 있는 안익은 토마토 = 토마토의 익은 일 + 1
					q.push(make_pair(make_pair(dz, dx), dy));
				}
			}
		}
	}
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (arr[i][j][k] == 0) return -1; // 안에 하나라도 안익은 토마토가 있을 때
				cnt = max(cnt, arr[i][j][k] - 1); // 마지막에 익은 토마토에서 -1
			}
		}
	}
	return cnt;
}

void solution() {
	cout << bfs() << "\n";
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < N; j++) {
//			for (int k = 0; k < M; k++) {
//				cout << arr[i][j][k] << " ";
//			}
//			cout << "\n";
//		}
//	}
}

int main(int argc, char* argv[]) {
	cin >> M >> N >> H;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				cin >> arr[i][j][k];
				if (arr[i][j][k] == 1) q.push(make_pair(make_pair(i, j), k));
			}
		}
	}
	solution();
}
