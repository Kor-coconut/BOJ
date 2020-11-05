//BOJ 4948
//베르트랑 공준
#include <iostream>

using namespace std;

bool arr[123456 * 2 + 1];

int main(int argc, char* argv[]) {
	int N = 1;
	int count;
	while (true) {
		cin >> N;
		if (N == 0) break;
		count = 0;
		for (int i = 0; i <= N * 2; i++) {
			arr[i] = true;
		}
		arr[0] = false;
		arr[1] = false;
		for (int i = 2; i <= N * 2; i++) {
			if (arr[i]) {
				for (int j = 2 * i; j <= N * 2; j += i) {
					arr[j] = false;
				}
			}
		}
		for (int i = N + 1; i <= N * 2; i++) {
			if (arr[i]) {
				count++;
			}
		}
		cout << count << "\n";
	}
 }