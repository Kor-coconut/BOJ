//BOJ 7576
//토마토
#include <iostream>
#include <queue>

using namespace std;

int arr[1001][1001];
bool visited[1001][1001];
int dxy[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
queue <pair <int, int>> q;
int m, n;
int answer = -1;

void bfs(int x, int y) {
	visited[x][y] = true;
	while (!q.empty()) {
		int xx = q.front().first;
		int yy = q.front().second;
		for (int i = 0; i < 4; i++) {
			int dx = xx + dxy[i][1];
			int dy = yy + dxy[i][0];
			if (0 <= dx && dx < n && 0 <= dy && dy < m) {
				if (!visited[dx][dy] && arr[dx][dy] == 0) {
					visited[dx][dy] = true;
					q.push(make_pair(dx, dy));
					arr[dx][dy] = arr[xx][yy] + 1;
				}
			}
		}
		q.pop();
	}
}

int solution() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!visited[i][j] && arr[i][j] == 1) {
				bfs(i, j);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				return -1;
			}
			if (answer < arr[i][j]) answer = arr[i][j];
		}
	}
	return answer - 1;
}

int main(int argc, char* argv[]) {
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if(arr[i][j] == 1) q.push(make_pair(i, j));
		}
	}
	cout << solution() << "\n";
}