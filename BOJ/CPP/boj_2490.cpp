//BOJ 2490
//윷놀이
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int arr[4];
	for (int j = 0; j < 3; j++) {
		int count = 0;
		for (int i = 0; i < 4; i++) cin >> arr[i];
		for (int i = 0; i < 4; i++) count += arr[i];
		if (count == 3) cout << "A" << "\n";
		else if (count == 2) cout << "B" << "\n";
		else if (count == 1) cout << "C" << "\n";
		else if (count == 0) cout << "D" << "\n";
		else if (count == 4) cout << "E" << "\n";

	}
}