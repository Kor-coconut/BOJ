//BOJ 2292
//¹úÁý
#include <bits/stdc++.h>

using namespace std;

long long DP[18261];

int solution() {
	int N;
	cin >> N;

	DP[0] = 0;
	DP[1] = 1;
	DP[2] = 2;
	int answer;
	for (int i = 3; i < 18261; i++) {
		DP[i] = DP[i - 1] + 6 * (i - 2);
	}// 18259
	if (N == 1)	return 1;

	for (int i = 2; i < 18261; i++) {
		if (DP[i] <= N && N < DP[i + 1]) {
			answer = i; break;
		}
	}

	return answer;
}

int main(int argc, char* argv[]) {
	cout << solution() << "\n";
}