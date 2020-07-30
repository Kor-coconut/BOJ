// BOJ 1152
// 단어의 개수
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	string text;
	int count = 0;
	getline(cin, text, '\n');
	cin.clear();
	int len = text.length();
	for (int i = 0; i < len; i++) {
		if (text[i] == ' ') count++;
	}
	if (text[0] == ' ') count--;
	if (text[len - 1] == ' ') count--;
	cout << count + 1 << "\n";
}