//BOJ 2741
//N 찍기
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T = 0;
	cin >> T;
	if (T <= 100000) {
		for (int i = 0; i < T; i++)
			cout << i+1 << "\n";
	}
	else {
		cout << "Error";
		return -1;
	}

}