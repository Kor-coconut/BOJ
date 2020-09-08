//BOJ 2309
//ÀÏ°ö ³­ÀïÀÌ
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
	int input[9];
	vector <int> arr;
	for (int i = 0; i < 9; i++) {
		cin >> input[i];
	}
	for (int a = 0; a < 9; a++) {
		for (int b = a + 1; b < 9; b++) {
			for (int c = b + 1; c < 9; c++) {
				for (int d = c + 1; d < 9; d++) {
					for (int e = d + 1; e < 9; e++) {
						for (int f = e + 1; f < 9; f++) {
							for (int g = f + 1; g < 9; g++) {
								if (input[a] + input[b] + input[c] + input[d] + input[e] + input[f] + input[g] == 100) {
									arr.push_back(input[a]);
									arr.push_back(input[b]);
									arr.push_back(input[c]);
									arr.push_back(input[d]);
									arr.push_back(input[e]);
									arr.push_back(input[f]);
									arr.push_back(input[g]);
									break;
								}
							}
							if (arr.size() == 7) break;
						}
						if (arr.size() == 7) break;
					}
					if (arr.size() == 7) break;
				}
				if (arr.size() == 7) break;
			}
			if (arr.size() == 7) break;
		}
		if (arr.size() == 7) break;
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < 7; i++) {
		cout << arr[i] << "\n";
	}
}