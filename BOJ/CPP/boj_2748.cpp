//BOJ 2748
//피보나치 수 2
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	vector <long long> fib;
	fib.push_back(0); fib.push_back(1);
	for (int i = 0; i <= n; i++) {
		if (i == 0) continue;
		else if (i == 1) continue;
		fib.push_back(fib[i - 1] + fib[i - 2]);
	}
	cout << fib[n];
}