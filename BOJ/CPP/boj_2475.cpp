// °ËÁõ¼ö
#include <bits/stdc++.h>

using namespace std;

void solution(){
    vector<int> N(5);
	int answer = 0;
    for(int i = 0; i < 5; i++){
        cin >> N[i];
        N[i] = N[i] * N[i];
    }

	for (int i = 0; i < 5; i++) {
		answer += N[i];
	}
	answer %= 10;
	cout << answer << endl;
}

int main(int argc, char* argv[]){
    solution();
}