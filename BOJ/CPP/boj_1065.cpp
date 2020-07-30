// BOJ 1065
// 한수
#include <iostream>
using namespace std;

int Get_count(int N) {
	int count = 99;
	int arr[3];
	if (N < 100) return N;
	else {
		for (int i = 100; i <= N; i++) {
			arr[2] = i / 100; // 3번째 자리
			arr[1] = (i - (arr[2] * 100)) / 10; // 2번째 자리
			arr[0] = i - arr[2] * 100 - arr[1] * 10;
			if (arr[2] - arr[1] == arr[1] - arr[0]) count++;
		}
		return count;
	}
}

int main(int argc, char* argv[]) {
	cin.tie(NULL); ios::sync_with_stdio(false);
	int N, count;
	cin >> N;
	if (N <= 0 || N > 1000) return -1;
	count = Get_count(N);
	cout << count;
//	system("pause");
}