//BOJ 2751
//수 정렬하기 2
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
	cin.tie(NULL); ios::sync_with_stdio(false);
	vector <int> arr;
	int N;
	cin >> N;
	if (N < 1 || N >1000000) return -1;
	arr.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}
}