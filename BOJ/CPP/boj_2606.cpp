//BOJ 2606
//바이러스
#include <iostream> 

#define MAX_COMPUTER 101

using namespace std; 

int arr[MAX_COMPUTER][MAX_COMPUTER] = { 0 };
int eadg, computer;

int floyed() {
	int answer = 0;
	for (int k = 1; k <= computer; k++) {
		for (int i = 1; i <= computer; i++) {
			for (int j = 1; j <= computer; j++) {
				if (arr[i][k] && arr[k][j]) arr[i][j] = 1;
			}
		}
	}

	for (int i = 2; i <= computer; i++) {
		if (arr[1][i] == 1) answer++;
	}

	return answer;
}

int main(int argc, char* argv[]) {
	cin >> computer;
	cin >> eadg;
	for (int i = 1; i <= eadg; i++) {
		int x, y;
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	int answer = floyed();
	cout << answer;
}