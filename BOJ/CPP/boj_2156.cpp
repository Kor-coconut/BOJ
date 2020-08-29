//BOJ 2156
//포도주 시식
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solution() {
	vector <int> arr;
	vector <int> DP;
	int N;
	cin >> N;
	DP.resize(N + 1);
	arr.resize(N + 1);
	DP[0] = 0;
	arr[0] = 0;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	
	if (N == 1) return arr[N];
	else if (N == 2) return arr[N - 1] + arr[N];
	else {
		DP[1] = arr[1];
		DP[2] = arr[2] + arr[1];
		for (int i = 3; i <= N; i++) {
			DP[i] = max(max(DP[i - 1], DP[i - 2] + arr[i]), DP[i - 3] + arr[i - 1] + arr[i]);
		}
		return DP[N];
	}
}

int main(int argc, char* argv[]) {
	cout << solution();
}