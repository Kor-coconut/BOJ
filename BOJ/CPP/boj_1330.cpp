// BOJ 1330
// 두 수 비교하기
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int a, b, arr[3];
	cin >> a;
	cin >> b;

	if (a, b >= -10000 && a, b <= 10000) {
		if (a > b)
			cout << ">" << endl;
		if (a < b)
			cout << "<" << endl;
		if (a == b)
			cout << "==" << endl;

	}
	else {
		cout << "error";
	}
	//
}