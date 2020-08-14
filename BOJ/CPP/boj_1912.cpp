// BOJ 1912
// ¿¬¼ÓÇÕ
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
	int N;
	long long tempsum, answer;
	vector <int> arr;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}
	answer = arr[0];
	tempsum = arr[0];
	for (int i = 1; i < N; i++) {
		if (tempsum + arr[i] > arr[i]) tempsum = tempsum + arr[i];
		else tempsum = arr[i];
		answer = max(tempsum, answer);
	}
	
	cout << answer;
}