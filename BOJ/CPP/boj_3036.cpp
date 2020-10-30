//BOJ 3036
//링
#include <bits/stdc++.h>

using namespace std;

void solution() {
	int N;
	vector <int> arr;
	cin >> N;
	arr.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < N; i++) {
		cout << arr[0] / gcd(arr[0], arr[i]) << "/" << arr[i] / gcd(arr[0], arr[i]) << "\n";
	}
}

int main(int argc, char* argv[]) {
		solution();
}