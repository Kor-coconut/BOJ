//BOJ 5585
//거스름 돈
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int N, count = 0;
	cin >> N;
	N = 1000 - N;

	count += N / 500;
	N %= 500;
	count += N / 100;
	N %= 100;
	count += N / 50;
	N %= 50;
	count += N / 10;
	N %= 10;
	count += N / 5;
	N %= 5;
	count += N / 1;
	cout << count << "\n";
}