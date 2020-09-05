//BOJ 2252
//줄 세우기
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define MAX_N 32001

int N, M, index[MAX_N];
vector<int> g[MAX_N];
queue<int> q;

void topological_order() {
	for (int i = 1; i <= N; i++) {
		if (index[i] == 0) q.push(i);
	}

	for (int i = 0; i < N; i++) {
		int cur = q.front();
		q.pop();
		cout << cur << " ";

		for (int i = 0; i < g[cur].size(); i++) {
			index[g[cur][i]]--;
			if (index[g[cur][i]] == 0) q.push(g[cur][i]);
		}
	}
}

int main(int argc, char* argv()) {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;

		g[x].push_back(y);
		index[y]++;
	}
	topological_order();
}