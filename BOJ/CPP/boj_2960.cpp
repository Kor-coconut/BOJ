//BOJ 2960
//에라토스테네스의 체
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

bool arr[1001];
vector <int> temp;

void solution() {
	memset(arr, true, sizeof(arr));
	int N, K;
	cin >> N >> K;
	arr[0] = false;
	arr[1] = false;
	for (int i = 2; i <= N; i++) {
		if (arr[i]) {
			for (int j = i; j <= N; j += i) {
				if (arr[j]) {
					K--;
					arr[j] = false;
					if (K == 0) cout << j;
				}
			}
		}
	}

}

int main(int argc, char* argv[]) {
	solution();
}