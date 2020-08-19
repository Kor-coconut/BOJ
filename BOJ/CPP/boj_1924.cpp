//BOJ 1924
//2007년

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	cin.tie(NULL); ios::sync_with_stdio(false);
	int x = 0, y = 0;//1   2  3   4    5    6   7  8   9   10  11  12
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string day[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN"};
	cin >> x >> y;
	if ((x >= 1 && x <= 12) && (y >= 1 && y <= 31)) {
		for (int i = 0; i < x-1; i++)
			y += month[i];
		cout << day[(y-1) % 7];

	}
	else return -1;
}