// BOJ 3052
// 나머지
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	cin.tie(NULL); ios::sync_with_stdio(false);
	int arr[10] = { 0 }, temp = 42, count[42] = { 0 };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		cin >> arr[i];
		if (arr[i] >= 0 && arr[i] <= 1000) continue;
		else return -1;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		count[arr[i] % 42]++;
	}
	int point = 0;
	for (int i = 0; i < sizeof(count) / sizeof(int); i++) {
		if (count[i] != 0) point++;
	}
	cout << point;
}