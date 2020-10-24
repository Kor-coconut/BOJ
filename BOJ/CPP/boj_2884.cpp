//BOJ 2884
//알람 시계
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int H, M;
	cin >> H >> M;

	if (H >= 0 && M >= 0 && H <= 23 && M <= 59) {
		M -= 45;
		if (M < 0) {
			H--;
			M = 60 + M;
			if (H < 0) {
				H = 24 + H;
			}
		}
		cout << H << " " << M << endl;
	}
	else {
		cout << "error";
	}
	//
}