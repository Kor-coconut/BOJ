//BOJ 2445
//별 찍기 - 8
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int N;
	cin >> N;
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		for (int j = N * 2; j > i * 2; j--) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 0; i < N; i++) {
		for (int j = N; j > i; j--) {
			cout << "*";
		}
		for (int j = 0; j < i * 2; j++) {
			cout << " ";
		}
		for (int j = N; j > i; j--) {
			cout << "*";
		}
		cout << "\n";
	}
}