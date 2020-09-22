//BOJ 2558
//A+B-2
#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int A, B;
	cin >> A;
	cin >> B;
	if ((A > 0 && A < 10 )&& (B > 0 && B < 10)) {
		cout << A + B;
	}
	else return -1;

}