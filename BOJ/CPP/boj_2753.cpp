//BOJ 2753
//윤년
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int year;
	cin >> year;

	if (year >= 1 && year <= 4000) {
		if ((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0)
			cout << "1" << endl;
		else
			cout << "0" << endl;

	}
	else {
		cout << "error";
	}
}