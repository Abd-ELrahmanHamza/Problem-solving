#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    long long sum = 0;
    long long num;
    cin>>num;
    cout<<(num+2-2)/2 + (num%2==0?0:-1*num);
    return 0;
}