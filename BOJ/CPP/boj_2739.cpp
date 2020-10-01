//BOJ 2739
//구구단
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int N;
	cin >> N;
	
	if (N >= 1 && N <= 9) {
		for (int i = 1; i < 10; i++)
			cout << N << " * " << i << " = " << N * i << endl;
	}
	else {
		cout << "error";
		return -1;
	}

}