//BOJ_2798
//블랙잭
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, temp, input;
	temp = 0;
	vector < int > card;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> input;
		card.push_back(input);
	}
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++)
			for (int k = j + 1; k < N; k++) {
				if ((card[i] + card[j] + card[k] <= M) && (card[i] + card[j] + card[k] > temp)) temp = card[i] + card[j] + card[k];
			}
	}
	cout << temp;
}