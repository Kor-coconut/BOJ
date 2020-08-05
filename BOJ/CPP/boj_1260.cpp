// BOJ 1260
// DFS¿Í BFS
#include <iostream>	
#include <vector>
#include <queue>

using namespace std;

int N, M, start;
vector <vector <int> > arr;
vector <bool> visit;
queue<int> q;

void DFS(int v) {
	cout << v << " ";

	for (int i = 1; i <= N; i++) {
		if (arr[v][i] && !visit[i]){
			visit[i] = 1;
			DFS(i);
		}
	}
}

void BFS(int v) {
	q.push(v);
	visit[v] = true;

	while (!q.empty()) {
		v = q.front();
		q.pop();

		cout << v << " ";

		for (int i = 1; i <= N; i++) {
			if (arr[v][i] && !visit[i]) {
				visit[i] = true;
				q.push(i);
			}
		}
	}
}

int main(int argc, char* argv[]) {
	int x, y;
	cin >> N >> M >> start;
	arr.resize(N+1);
	visit.resize(N+1);
	visit[start] = true;
	for (int i = 1; i <= N; i++) {
		arr[i].resize(N + 1);
	}
	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	DFS(start);
	cout << "\n";
	visit.clear();
	visit.resize(N+1);
	visit[start] = true;
	BFS(start);
}