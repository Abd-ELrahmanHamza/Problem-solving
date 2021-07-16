#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::min;
using std::string;

int main()
{
    int x1, x2;
    cin >> x1 >> x2;
    int halfDis = abs(x2 - x1)/2;
    cout << halfDis*(halfDis+1) + (abs(x2-x1)%2==0?0:halfDis+1);
    return 0;
}