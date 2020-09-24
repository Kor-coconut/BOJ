//BOJ 2577
//숫자의 개수
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	cin.tie(NULL); ios::sync_with_stdio(false);
	int A, B, C, temp, answer[10] = { 0 };
	cin >> A >> B >> C;
	if ((A >= 100 && A <= 999) && (B >= 100 && B <= 999) && (C >= 100 && C <= 999)) {
		temp = A * B * C;
		while (temp != 0) {
			answer[temp % 10]++;
			temp /= 10;
		}
		for(int i = 0; i < sizeof(answer)/sizeof(int); i++)
			cout << answer[i] << "\n";
	}
	else return -1;

}