// BOJ 1546
// ЦђБе
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
	cin.tie(NULL); ios::sync_with_stdio(false);
	int N, max = 0;
	vector <double> score;
	cin >> N;
	if (N >= 1 && N <= 1000) {
		score.resize(N);
		double sum = 0;
		for(int i = 0; i < N; i++){
			cin >> score[i];
			if (score[i] > 100 && score[i] < 0) return -1;
		}
		for (int i = 0; i < score.size(); i++)
			if (max < score[i]) max = score[i];
		for (int i = 0; i < score.size(); i++) {
			score[i] = (score[i] / max )* 100;
			sum += score[i];
		}
		sum /= N;
		cout << "\n" << sum;
	}
	else return -1;

	 //system("pause");

}