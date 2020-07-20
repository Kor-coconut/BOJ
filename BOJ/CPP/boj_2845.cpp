// 파티가 끝나고 난 뒤

#include <bits/stdc++.h>

using namespace std;

void solution() {
	int L, P;
	int news_person[5];
	cin >> L >> P;
	
	for (int i = 0; i < 5; i++) {
		cin >> news_person[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << news_person[i] - (L * P) << " ";
	}
}

int main(int argc, char* argv[]) {
	solution();
}