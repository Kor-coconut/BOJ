//BOJ_2441
//별 찍기 - 4
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	cin.tie(NULL); ios::sync_with_stdio(false);
	int N = 0;
	cin >> N;
	for(int i = 0; i < N; i++){
		for (int j = 0; j < i; j++)
			cout << " ";
		for(int j = N-i; j > 0; j--)
			cout << "*";
		cout << "\n";
	}

//	system("pause");
}