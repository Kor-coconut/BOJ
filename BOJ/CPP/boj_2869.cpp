//BOJ 2869
//달팽이는 올라가고 싶다
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	cin.tie(NULL); ios::sync_with_stdio(false);
	int A, B, V;
	int day, distance;
	cin >> A >> B >> V;
	if ((B < 1 || B >= A) || (A <= B || A > V) || (V < A || V>1000000000)) return -1;
	distance = V - A;
	day = distance / (A - B);
	if (distance % (A - B) != 0) ++day;

	cout << ++day << '\n';
}