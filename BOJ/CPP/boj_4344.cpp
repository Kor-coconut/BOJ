//BOJ 4344
//평균은 넘겠지
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
	int N, T;
	vector <int> score;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		int sum = 0;
		for (int j = 0; j < N; j++) {
			int temp;
			cin >> temp;
			score.push_back(temp);
			sum += temp;
		}
		double avg = 0;
		avg = (double)sum / N;
		int count = 0;
		for (int i = 0; i < N; i++) {
			if (avg < score[i]) count++;
		}
		avg = (((double)count / N) * 100);
		cout << fixed;
		cout.precision(3);
		cout << avg << "%\n";
		score.clear();
	}
}