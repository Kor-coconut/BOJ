//BOJ 5565
//영수증
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int sum;
	cin >> sum;
	int count = 0;
	for (int i = 0; i < 9; i++) {
		int N;
		cin >> N;
		count += N;
	}
	cout << sum - count << "\n";
}