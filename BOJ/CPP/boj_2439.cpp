//BOJ 2439
//별 찍기 - 2
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;

	if (N >= 1 && N <= 100) {
		for (int i = 1; i < N+1; i++) {
			for(int k = N; k > i; k--)
				cout << " ";
			for (int j = 0; j < i; j++) {
				cout <<"*";
			}
			cout << "\n";
		}
	}
	else {
		cout << "Error";
		return -1;
	}

}