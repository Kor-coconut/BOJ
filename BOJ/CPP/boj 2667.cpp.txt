//BOJ 2667
//단지번호붙이기
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>

using namespace std;

queue <pair <int, int>> que;
int arr[26][26];
int cnt = 0;
vector <int> apt;
int answer = 0;
int N;
int dxy[4][2] = { {-1, 0}, {1,0} ,{0,1}, {0,-1} };

void bfs(int x, int y) {
	que.push(make_pair(x, y));
	cnt = 0;
	while (!que.empty()) {
		for (int i = 0; i < 4; i++) {
			int dx = que.front().second + dxy[i][0];
			int dy = que.front().first + dxy[i][1];
			if (dx >= 0 && dx < N && dy >= 0 && dy < N && arr[dy][dx] == 1) {
				que.push(make_pair(dy, dx));
				arr[dy][dx] = arr[que.front().first][que.front().second] + 1;
				cnt++;
			}
		}
		que.pop();
	}
	if (cnt == 0) apt.push_back(1);
	else apt.push_back(cnt);
}

void solution() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 1) {
				answer++;
				bfs(i, j);
			}
		}
	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << "\n";
//	}
	cout << apt.size() << "\n";
	sort(apt.begin(), apt.end());
	for (int i = 0; i < apt.size(); i++) cout << apt[i] << "\n";
}

int main(int argc, char* argv) {
	string str;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < N; j++) {
			arr[i][j] = str[j] - 48;
		}
	}
	solution();
}