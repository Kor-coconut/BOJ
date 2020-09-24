// BOJ 2562
// 최댓값
#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int arr[9], num, count = 0, max = -1;
	
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (arr[i] > 0 && arr[i] < 100) {
			if (max <= arr[i]) max = arr[i];
		}
		else return -1;
	}
	for (int i = 0; i < 9; i++) {
		count++;
		if (max == arr[i]) break;
	}
	cout << max << "\n" << count;

}