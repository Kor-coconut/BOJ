// BOJ 4963
// 섬의 개수
#include <cstring>
#include <iostream>
#include <queue>

using namespace std;

int w, h, cnt = 0;
int map[51][51];
int dxy[8][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1} };
bool visit[51][51];
queue <pair <int, int> > que;

void bfs(int x, int y) {
	que.push(make_pair(x, y));
	visit[x][y] = true;
	while (!que.empty()) {
		for (int i = 0; i < 8; i++) {
			int dx = que.front().second + dxy[i][0];
			int dy = que.front().first + dxy[i][1];
			if (0 <= dx && dx <= w && 0 <= dy && dy <= h) {
				if (map[dy][dx] && !visit[dy][dx]) {
					visit[dy][dx] = true;
					que.push(make_pair(dy, dx));
					map[dy][dx] = map[que.front().first][que.front().second] + 1;
				}
			}
		}
		que.pop();
	}
}

void solution() {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (map[i][j] == 1 && visit[i][j] == false) { // map[i][j] && !visit[i][j]
				bfs(i, j);
				cnt++;
			}
		}
	}

//	for (int i = 0; i < h; i++) {
//		for (int j = 0; j < w; j++) {
//			cout << map[i][j] << " ";
//		}
//		cout << "\n";
//	}

}

int main(int argc, char* argv[]) {
	while (true) {
		cin >> w >> h;
		if (!w && !h) break;
		memset(visit, false, sizeof(visit));
		memset(map, 0, sizeof(map));
		cnt = 0;
		solution();
		cout << cnt << "\n";
	}
}