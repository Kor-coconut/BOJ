//BOJ 4153
//직각삼각형

#include <bits/stdc++.h>

using namespace std;

vector <int> arr;
int solution(){
    
    sort(arr.begin(), arr.end());
    
    if (arr[2] * arr[2] == arr[1] * arr[1] + arr[0] * arr[0]) return 1;
    else return -1;
}

int main(int argc, char* argv[]){
    arr.resize(3);
    while(true){
        for (int i = 0; i < 3; i++){
            cin >> arr[i];
        }
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) break;
        int answer = solution();
        if (answer == 1) cout << "right\n";
        else if (answer == -1) cout << "wrong\n";
    }
    
}