// BOJ 1904
// 01≈∏¿œ
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N;
	vector <int> fib;
	fib.push_back(0); fib.push_back(1);
	cin >> N;
	for (int i = 2; i <= N +1; i++) {
			fib.push_back((fib[i - 2] + fib[i - 1]) % 15746);
	}
		cout << fib[N + 1];
}