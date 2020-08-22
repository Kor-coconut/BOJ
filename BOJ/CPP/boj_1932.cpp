//BOJ 1932
//정수 삼각형
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
	int N;
	vector <vector <int>> tree;
	vector <vector<long long>> DP;
	cin >> N;
	tree.resize(N);
	// 1. 트리 받기
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i+1; j++) {
			int x;
			cin >> x;
			tree[i].push_back(x);
		}
	}
	DP.resize(N);
	for (int i = 0; i < N; i++) {
		DP[i].resize(i + 1);
	}
	long long temp = 0;
	// DP 입력
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i + 1; j++) {
			if (i == 0 && j == 0) DP[i][j] = tree[i][j]; // 맨 첫줄
			else if (j == 0) DP[i][j] = DP[i - 1][j] + tree[i][j];
			else if (i == j) DP[i][j] = DP[i - 1][j - 1] + tree[i][j]; // 오른쪽
			else if (i != j) DP[i][j] = max((DP[i - 1][j - 1]), DP[i - 1][j]) + tree[i][j]; // 중앙
			if (temp < DP[i][j]) temp = DP[i][j];
		}
	}
	// 최대값 출력
	cout << temp;
}