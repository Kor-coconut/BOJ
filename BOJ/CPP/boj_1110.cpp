// BOJ 1110
// 더하기 사이클

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N, sum = -1, first, second, temp, i = 0;
	cin >> N;
	if (N >= 0 && N <= 99) {
		sum = N;
		while (1) {
			if (sum < 10) {
				second = sum % 10;
				temp = second;
				temp = temp % 10;
				sum = second * 10 + temp;				
			}
			else {
				second = sum % 10;
				first = (sum - second) / 10;
				temp = first + second;
				temp = temp % 10;
				sum = second * 10 + temp;
			}
			i++;
			if (N == sum) {
				cout << i;
				break;
			}
		}
	}
	else
		return -1;
}