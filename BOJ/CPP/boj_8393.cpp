//BOJ 8393
//합
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int N, sum = 0;
	cin >> N;
	if (N >= 1 && N <= 10000) {
		for (int i = 0; i < N; i++) {
			sum = sum + i + 1;
		}
		cout << sum << endl;
	}
	else {
		cout << "Error";
		return -1;
	}

}