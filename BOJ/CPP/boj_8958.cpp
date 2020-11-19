//BOJ 8958
//OX 퀴즈
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> GetString(vector<string> OX, int N) {
	OX.resize(N);
	string OX_string;
	for (int i = 0; i < N; i++) {
		getline(cin, OX[i], '\n');
	}
	return OX;
}

vector<int> GetScore(vector<string> OX, int N) {
	vector<int> score;
	score.resize(OX.size());
	score.assign(score.size(),0);
	for (int i = 0; i < N; i++) {
		int score_sum = 0;
		for (int j = 0; j < OX[i].size(); j++) {//
			if (OX[i][j] == 'O') score_sum++; // 여기 수정 해야됨
			else if (OX[i][j] == 'X') score_sum = 0;//
			score[i] += score_sum;
		}
	}
	return score;
}

int main(int argc, char* argv[]) {
	//cin.tie(NULL); ios::sync_with_stdio(false);
	vector<string> OX;
	vector<int> score;
	int N;
	cin >> N;
	cin.ignore();
	OX = GetString(OX, N);
	score = GetScore(OX, N);
	for (int i = 0; i < N; i++) {
		cout << score[i] << "\n";
	}
	//system("pause");
}