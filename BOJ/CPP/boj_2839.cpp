//BOJ 2839
//설탕 배달
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int N, count = 0;
	cin >> N;

	int temp = 0;
		int k = 0;

	temp = N / 5;
	for (int i = 0; i <= temp; i++) {
		if ((N - (i * 5)) % 3 == 0) k = i;
	}

	if ((N % 5) % 3 == 0) {
		count += N / 5;
		N %= 5;
		count += N / 3;
	}
	else if ((N - 5 * k) % 3 == 0) {
		count += k;
		N -= k * 5;
		count += N / 3;
	}
	else if (N % 3 == 0) {
		count += N / 3;
	}
	else count = -1;

	cout << count;
}