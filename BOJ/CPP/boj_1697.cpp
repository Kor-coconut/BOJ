// BOJ 1697
// ¼û¹Ù²ÀÁú
#include <iostream>
#include <queue>

using namespace std;

int N, K;
bool visited[100001];
queue <pair <int, int>> que;

int bfs(int N, int K) {
 	que.push(make_pair(N, 0));
	visited[N] = true;
	while (!que.empty()) {
			int x = que.front().first;
 			int cnt = que.front().second;
			que.pop();
			visited[x] = true;
			if (x == K) { return cnt; }
			if (x + 1 < 100001 && !visited[x + 1]) {
				que.push(make_pair(x + 1, cnt + 1));
			}
			if (0 <= x - 1 && !visited[x - 1]) {
				que.push(make_pair(x - 1, cnt+1));
			}
			if (x * 2 < 100001 && !visited[x * 2]) {
				que.push(make_pair(x * 2, cnt+1));
			}
	}
}

void solution() {
	cout << bfs(N, K);
}

int main(int argc, char* argv[]) {
	cin >> N >> K;
	visited[N] = true;

	solution();
}