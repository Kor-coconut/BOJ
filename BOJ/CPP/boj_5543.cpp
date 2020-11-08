//BOJ 5543
//상근날드
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int N;
	int temp1 = 2001;
	int temp2 = 2001;
	for (int i = 0; i < 3; i++) {
		cin >> N;
		if (temp1 > N) temp1 = N;
	}
	for (int i = 0; i < 2; i++) {
		cin >> N;
		if (temp2 > N) temp2 = N;
	}
	cout << temp1 + temp2 - 50 << "\n";
}