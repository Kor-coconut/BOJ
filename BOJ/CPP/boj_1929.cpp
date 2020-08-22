//BOJ 1929
//소수 구하기
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long N, M;
	vector <bool> arr;
	cin >> N >> M;
	arr.resize(M + 1, true);
	arr[0] = false;
	arr[1] = false;
	for (long i = 2; i <= M; i++) {
		if (arr[i]) {
			for (long j = 2 * i; j <= M; j += i) {
				arr[j] = false;
			}
		}
	}
	for (long i = N; i <= M; i++) {
		if (arr[i])
			cout << i << "\n";
	}
}