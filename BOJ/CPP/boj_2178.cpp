//BOJ 2178
//�̷� Ž��
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int arr[101][101];
int dxy[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0 , 1} }; // �� �� �� ��

void bfs(int N, int M) {
	queue <pair<int, int>> que;
	que.push(make_pair(0, 0)); // �����ϴ� ��ġ
	pair <int, int> curr;
	int dx, dy;
	while (!que.empty()) { // 0�� �ƴҶ� ����
		curr = que.front(); // �����ϴ� �� ������ ���� Ž�� ���� ���ϱ�
		que.pop();
		for (int i = 0; i < 4; i++) { // �����¿� Ž��
			dx = curr.second + dxy[i][0]; // �迭 [y][x] ������ ��. ù��°�� y�� �ι�°�� x��
			dy = curr.first + dxy[i][1];
			if ((dx >= 0 && dx < M) && (dy >= 0 && dy < N) && arr[dy][dx] == 1) {
				que.push(make_pair(dy, dx)); // ���� �̵������� ��ġ queue�� ����.
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