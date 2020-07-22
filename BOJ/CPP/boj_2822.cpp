//BOJ 2822
//점수 계산
#include <bits/stdc++.h>

using namespace std;

void solution() {
	vector <int> arr, temp;
	arr.resize(8);
	temp.resize(8);
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
		temp[i] = arr[i];
	}
	sort(arr.rbegin(), arr.rend());
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	cout << sum << "\n";
	vector <int> ans;
	ans.resize(5);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 8; j++) {
			if (arr[i] == temp[j]) {
				ans[i] = j + 1;
				break;
			}
		}
	}
	sort(ans.begin(), ans.end());
	for (int i = 0; i < 5; i++) {
		cout << ans[i] << " ";
	}
}

int main(int argc, char* argv[]) {
	solution();
}