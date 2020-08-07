// BOJ 1427
// 소트인사이드

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
	cin.tie(NULL); ios::sync_with_stdio(false);
	int N = 0;
	vector <int> temp;
	cin >> N;
	while (N != 0) {
		temp.push_back(N % 10);
		N /= 10;
	}
	sort(temp.begin(), temp.end());
	for (int i = temp.size()-1; i >= 0; i--) {
		cout << temp[i];
	}
}