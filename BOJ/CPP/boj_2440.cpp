//BOJ 2440
//별 찍기 - 3
#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	if (N >= 1 && N <= 100) {
		for (int i = 0; i < N; i++)	{
			for (int j = N-i; j > 0; j--)
				cout << "*";
			cout << "\n";
		}
	}
	else return -1;

}