// BOJ 9012
// 괄호
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

string input;
int T, count_a;
stack <char> temp;

void get_input() {
	getline(cin, input, '\n');
	for (int i = 0; i < input.size(); i++) {
		temp.push(input[i]);
	}
}

bool answer() {
	for (int i = 0; i < input.size(); i++) {
		if (temp.top() == ')') {
			count_a++;
			temp.pop();
		}
		else if (temp.top() == '(') {
			count_a--;
			temp.pop();
		}
		if (count_a < 0) return false;
	}
	if (count_a == 0) return true;
	else return false;
}

int main(int argc, char* argv[]) {
	cin >> T;
	cin.ignore();
	for (int i = 0; i < T; i++) {
		count_a = 0;
		get_input();
		bool a = answer();
		if (a == true) cout << "YES\n";
		else if (a == false) cout << "NO\n";
		for (; !temp.empty();) temp.pop();
	}
}