// BOJ 3053
// 택시 기하학
#include <iostream>

#define PI 3.14159265358979
using namespace std;

int main(int argc, char* argv[]) {
	int R;
	cin >> R;
	
	cout.setf(ios::fixed);
	cout.precision(6);
	cout << R * R * PI << "\n";
	cout << R * R * 2 << "\n";
}