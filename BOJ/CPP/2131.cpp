//BOJ 2131
//분해합
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	cin.tie(NULL); ios::sync_with_stdio(false);

	int arr[7] = { 0 };
	int N, count = 0;
	int temp, check = 0;
	cin >> N;
	for (int i = N; i != 0;i /= 10) {
		count++;
	}
	temp = N - count * 9;
	int END = count * 9;
	for (int i = 0; i < END; i++) {
		count = END / 9;
		check = 0;
		int k = temp;
		for (int j = 0; j < count; j++) {
			arr[j] = k % 10;
			k /= 10;
			check += arr[j];
		}
		if (temp + check == N) {
			break;
		}
		temp++;
	}
	if (temp == N) {
		temp = 0;
	}
	cout << temp;

}