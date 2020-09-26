//BOJ 2588
//곱셈
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int a, b, arr[3];
	cin >> a;
	cin >> b;

	if (a, b >= 100 && a, b <= 999) {
		arr[0] = b - (b % 100);
		arr[1] = b - (b % 10) - arr[0];
		arr[2] = b - (b % 1) - arr[0] - arr[1];

		cout << (a * arr[2]) / 1 << endl;
		cout << (a * arr[1]) / 10 << endl;
		cout << (a * arr[0]) / 100 << endl;
		cout << (a * b) << endl;


	}
	else {
		cout << "error";
	}//
}