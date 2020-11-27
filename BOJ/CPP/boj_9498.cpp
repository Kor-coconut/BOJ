//BOJ 9498
//시험 성적
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int a;
	cin >> a;

	if (a >= 0 && a <= 100) {
		if (a >= 90)
			cout << "A" << endl;
		else if (a >= 80)
			cout << "B" << endl;
		else if (a >= 70)
			cout << "C" << endl;
		else if (a >= 60)
			cout << "D" << endl;
		else
			cout << "F" << endl;

	}
	else {
		cout << "error";
	}
}