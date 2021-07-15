#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int d1,d2,d3;
    cin>>d1>>d2>>d3;
    int firstMin = std::min(d1,d2);
    int secMin = std::min(d1+d2,d3);
    int thirdMin = std::min(firstMin+secMin,d1+d2-firstMin);
    cout<<firstMin+secMin+thirdMin;
    return 0;
}