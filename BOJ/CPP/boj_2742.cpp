//BOJ 2742
//기찍 N
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T = 0;
	cin >> T;
	if (T <= 100000) {
		for (int i = T; i > 0; i--)
			cout << i << "\n";
	}
	else {
		cout << "Error";
		return -1;
	}

}