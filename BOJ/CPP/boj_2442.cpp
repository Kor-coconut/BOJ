//BOJ 2442
//별 찍기 - 5
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = N - 1; j > i; j--) {
			cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}