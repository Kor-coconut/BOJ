//BOJ 1978
//소수 찾기
#include <iostream>

using namespace std;

bool arr[1001];

void answer() {
	int N, count = 0;
	int temp[101];
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> temp[i];
	}

	for (int i = 0; i < 1001; i++) {
		arr[i] = true;
	}
	arr[0] = false;
	arr[1] = false;
	for (int i = 2; i < 1001; i++) {
		if (arr[i]) {
			for (int j = 2 * i; j < 1001; j += i) {
				arr[j] = false;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		if (arr[temp[i]]) count++;
	}
	cout << count;

}

int main(int argc, char* argv[]) {
	answer();
}