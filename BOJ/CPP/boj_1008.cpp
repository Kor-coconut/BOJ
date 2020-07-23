// BOJ 1008
// A/B
#include <iostream>
#include <iomanip>
int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout.precision(9);
    //std::cout<<std::setprecision(9);도 똑같음
    std::cout <<std::fixed<<(double)num1 / num2;
    return 0;
}
